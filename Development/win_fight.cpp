#include "win_fight.h"
#include "ui_win_fight.h"

Win_Fight::Win_Fight(QWidget *parent, Hero * hero, Monster * monster) :
    QWidget(parent),
    mHero(hero),
    mMonster(monster),
    ui(new Ui::Win_Fight)
{
    ui->setupUi(this);
    setGeometry(parent->x(), parent->y(), parent->width(), parent->height());
    hide();
    initInterface();

    t_deleteAnimation = new QTimer(this);
    t_deleteAnimation->setSingleShot(true);
    connect(t_deleteAnimation, SIGNAL(timeout()), this, SLOT(hideAnimation()));

    t_restoreMonsterImage = new QTimer(this);
    t_restoreMonsterImage->setSingleShot(true);
    connect(t_restoreMonsterImage, SIGNAL(timeout()), this, SLOT(restoreMonsterImage()));

    w_fightAnimation = nullptr;

    hero->stopMoving();
}

Win_Fight::~Win_Fight()
{
    delete ui;
    if(w_fightAnimation)
        delete w_fightAnimation;
}

void Win_Fight::displayInterface()
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(500);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);

    QPropertyAnimation *b = new QPropertyAnimation(this,"geometry");
    b->setDuration(600);
    b->setStartValue(QRect(this->x()-this->width(),this->y(),this->width(),this->height()));
    b->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    b->start(QPropertyAnimation::DeleteWhenStopped);

    showFullScreen();
}

void Win_Fight::hideInterface()
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(600);
    a->setStartValue(1);
    a->setEndValue(0);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);

    QTimer * timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(timer, SIGNAL(timeout()), this, SIGNAL(sig_closeWindow()));
    timer->start(1000);
}

void Win_Fight::initInterface()
{    
    mLifeMonster = new LifeProgressBar(this, mMonster, 45);
    mLifeHero = new LifeProgressBar(this, mHero, 25);    
    heroMana.timer = new QTimer(this);
    t_buttonsDelayer = new QTimer(this);
    t_heroStaminaRecovery = new QTimer(this);
    t_monsterStaminaRecovery = new QTimer(this);
    t_restoreDodge = new QTimer(this);
    t_restoreFlee = new QTimer(this);
    t_buttonsDelayer->setSingleShot(true);
    t_restoreDodge->setSingleShot(true);
    t_restoreFlee->setSingleShot(true);

    loadFightAnimationsPixmap();
    ui->image_fight->setScaledContents(true);
    ui->image_fight->setPixmap(mMonster->getFightImage(0));
    ui->layout_monsterLife->addWidget(mLifeMonster);
    ui->layout_heroLife->addWidget(mLifeHero);
    ui->data_heroMana->setMaximum(mHero->getMana().maxMana);
    ui->data_heroMana->setValue(mHero->getMana().curMana);
    mHero->setStamina(mHero->getStamina().maxStamina);
    ui->data_playerStamina->setMaximum(mHero->getStamina().maxStamina);
    ui->data_playerStamina->setValue(mHero->getStamina().curStamina);
    mBreak = false;
    mDodge = false;
    mFleeFail = false;

    connect(mMonster, SIGNAL(sig_lifeChanged()), mLifeMonster, SLOT(lifeChanged()));
    connect(mHero, SIGNAL(sig_lifeChanged()), mLifeHero, SLOT(lifeChanged()));
    connect(heroMana.timer, SIGNAL(timeout()), this, SLOT(manaChangeAnimationHero()));
    connect(mHero, SIGNAL(sig_manaChanged()), this, SLOT(manaAnimationHero()));
    connect(t_heroStaminaRecovery, SIGNAL(timeout()), this, SLOT(heroStaminaRecovery()));
    connect(t_monsterStaminaRecovery, SIGNAL(timeout()), this, SLOT(monsterStaminaRecovery()));
    connect(t_buttonsDelayer, SIGNAL(timeout()), this, SLOT(enableNewAction()));
    connect(mHero, SIGNAL(sig_dodge()), this, SLOT(heroDodged()));
    connect(t_restoreDodge, SIGNAL(timeout()), this, SLOT(restoreHeroDodged()));
    connect(t_restoreFlee, SIGNAL(timeout()), this, SLOT(restoreHeroFlee()));

    mScenePotion = new QGraphicsScene(this);
    ui->graphicsView->setStyleSheet("background-color:rgba(0,0,0,0);");
    ui->graphicsView->setScene(mScenePotion);

    addConsumablesOnScreen();

    ui->img_player->setPixmap(mHero->getImage());
    ui->img_monster->setPixmap(mMonster->getImage());
    ui->img_player->setScaledContents(true);
    ui->img_monster->setScaledContents(true);

    monsterUseStamina(qrand()%(70-30)+30);
}

void Win_Fight::loadFightAnimationsPixmap()
{
    pMonsterLightAttack = mMonster->getLightAttackAnimation();
    pMonsterHeavyAttack = mMonster->getHeavyAttackAnimation();
}

bool Win_Fight::heroUseStamina(int loss)
{
    if(mHero->getStamina().curStamina - loss < 0)
        return false;
    mHero->setStamina(mHero->getStamina().curStamina - loss);
    if(t_heroStaminaRecovery->isActive())
        t_heroStaminaRecovery->stop();
    t_heroStaminaRecovery->start(static_cast<int>(300.0*(static_cast<qreal>(abs(mHero->getAttackSpeed()-11.0))/5.0)));
    return true;
}

void Win_Fight::monsterUseStamina(int loss)
{
    mMonster->setStamina(mMonster->getStamina().curStamina - loss);
    t_monsterStaminaRecovery->start(100);
}

void Win_Fight::manaAnimationHero()
{
    heroMana.manaToReach = mHero->getMana().curMana;
    heroMana.timer->start(10);
}

void Win_Fight::heroStaminaRecovery()
{
    mHero->setStamina(mHero->getStamina().curStamina+5);
    ui->data_playerStamina->setValue(mHero->getStamina().curStamina);
    if(mHero->getStamina().curStamina == mHero->getStamina().maxStamina)
        heroStaminaRecovered();
    update();
}

void Win_Fight::monsterStaminaRecovery()
{
    mMonster->setStamina(mMonster->getStamina().curStamina+1);
    if(mMonster->getStamina().curStamina >= mMonster->getStamina().maxStamina)
        monsterStaminaRecovered();
}

void Win_Fight::monsterStaminaRecovered()
{
    t_monsterStaminaRecovery->stop();
    switch(qrand()%3){
    case 0 :
        emit sig_playSound(mMonster->getSoundIndexFor(HEAVY_ATTACK));
        if(w_fightAnimation)
            delete w_fightAnimation;
        w_fightAnimation = new W_Animation_Fight(this, pMonsterHeavyAttack);
        connect(w_fightAnimation, SIGNAL(sig_hideAnimation()), this, SLOT(hideAnimation()));
        w_fightAnimation->setGeometry((width()-700)/2,(height()-700)/2,700,700);

        monsterUseStamina(80);
        mHero->takeDamage(static_cast<int>(mMonster->getDamage()*1.5));
        break;
    case 1 :
        emit sig_playSound(mMonster->getSoundIndexFor(LIGHT_ATTACK));
        if(w_fightAnimation)
            delete w_fightAnimation;
        w_fightAnimation = new W_Animation_Fight(this, pMonsterLightAttack);
        connect(w_fightAnimation, SIGNAL(sig_hideAnimation()), this, SLOT(hideAnimation()));
        w_fightAnimation->setGeometry((width()-700)/2,(height()-700)/2,700,700);

        monsterUseStamina(50);
        mHero->takeDamage(static_cast<int>(mMonster->getDamage()*1.0));
        break;
    case 2 :
        emit sig_playSound(mMonster->getSoundIndexFor(ROAR));
        monsterUseStamina(30);
    }
    checkFightIssue();
}

void Win_Fight::enableNewAction()
{
    enableButtons(true);
}

void Win_Fight::useConsumable(ItemQuickDisplayer * w_item)
{
    enableItemsUtilisation(false);
    Consumable * item = dynamic_cast<Consumable*>(w_item->getItem());
    while(!mConsumables.isEmpty())
    {
        mScenePotion->removeItem(mConsumables.last());
        mConsumables.takeLast()->deleteLater();
    }
    mHero->useConsumable(item);
    addConsumablesOnScreen();
}

void Win_Fight::heroStaminaRecovered()
{
    t_heroStaminaRecovery->stop();
}

void Win_Fight::enableButtons(bool toggle)
{
    ui->button_flee->setEnabled(toggle);
    ui->button_useObject->setEnabled(toggle);
    ui->button_heavyAttack->setEnabled(toggle);
    ui->button_lightAttack->setEnabled(toggle);
}

void Win_Fight::enableItemsUtilisation(bool toggle)
{
    if(toggle)
    {
        ui->graphicsView->setStyleSheet("background-color:rgba(250,250,250,100);");
        for(ItemQuickDisplayer * w_item : mConsumables)
        {
            connect(w_item, SIGNAL(sig_itemClicked(ItemQuickDisplayer*)), this, SLOT(useConsumable(ItemQuickDisplayer*)));
        }
    }else
    {
        ui->graphicsView->setStyleSheet("background-color:rgba(0,0,0,0);");
        for(ItemQuickDisplayer * w_item : mConsumables)
        {
            disconnect(w_item, SIGNAL(sig_itemClicked(ItemQuickDisplayer*)), this, SLOT(useConsumable(ItemQuickDisplayer*)));
        }
    }
}

void Win_Fight::addConsumablesOnScreen()
{
    mScenePotion->setSceneRect(0,0,ui->graphicsView->width(), ui->graphicsView->height());
    QList<Consumable*> list = mHero->getBag()->getConsumables();
    for(Consumable * item : list)
    {
        ItemQuickDisplayer * w_item = new ItemQuickDisplayer(item);
        w_item->setMovable(false);
        ui->graphicsView->scene()->addItem(w_item);
        mConsumables.append(w_item);
    }
    int offset = 5;
    for(ItemQuickDisplayer * item : mConsumables)
    {
        item->setPos(offset, 5);
        offset += 105;
        if(mScenePotion->sceneRect().width() < offset + 105){
            mScenePotion->setSceneRect(0,0,mScenePotion->sceneRect().width()+105, mScenePotion->sceneRect().height());
        }
    }
}

void Win_Fight::checkFightIssue()
{
    if(mHero->getLife().curLife <= 0){
        emit sig_endFight(mHero);
        hideInterface();
    }else if(mMonster->getLife().curLife <= 0){
        emit sig_endFight(mMonster);
        hideInterface();
    }
}

void Win_Fight::on_button_heavyAttack_clicked()
{
    if(!heroUseStamina(140)){
        return;
    }
    enableButtons(false);
    t_buttonsDelayer->start(1500);

    emit sig_playSound(SOUND_HERO_ATTACK);
    mMonster->setLife(mMonster->getLife().curLife-static_cast<int>(mHero->calculateDamage()*1.5));
    ui->image_fight->setPixmap(mMonster->getFightImage(1));
    t_restoreMonsterImage->start(600);

    checkFightIssue();
}

void Win_Fight::on_button_useObject_clicked()
{
    if(mConsumables.isEmpty()){
        return;
    }
    if(!heroUseStamina(150)){
        return;
    }
    enableButtons(false);
    t_buttonsDelayer->start(1500);

    enableItemsUtilisation(true);

    checkFightIssue();
}

void Win_Fight::on_button_lightAttack_clicked()
{
    if(!heroUseStamina(110)){
        return;
    }
    enableButtons(false);
    t_buttonsDelayer->start(1500);

    emit sig_playSound(SOUND_HERO_ATTACK);
    mMonster->setLife(mMonster->getLife().curLife-static_cast<int>(mHero->calculateDamage()));
    ui->image_fight->setPixmap(mMonster->getFightImage(1));
    t_restoreMonsterImage->start(1000);

    checkFightIssue();
}

void Win_Fight::on_button_flee_clicked()
{
    if(!heroUseStamina(200)){
        return;
    }
    enableButtons(false);
    t_buttonsDelayer->start(1500);

    if(qrand()%3!=0)
    {
        emit sig_endFight(nullptr);
        hideInterface();
    }else{
        heroFailToFlee();
    }

}

void Win_Fight::manaChangeAnimationHero()
{
    if(ui->data_heroMana->value() > heroMana.manaToReach){
        ui->data_heroMana->setValue(ui->data_heroMana->value()-1);
    }else{
        ui->data_heroMana->setValue(ui->data_heroMana->value()+1);
    }

    if(ui->data_heroMana->value() == heroMana.manaToReach){
        heroMana.timer->stop();
    }
    if(!t_heroStaminaRecovery->isActive())
        update();
}

void Win_Fight::paintEvent(QPaintEvent *)
{
    QPainter painter(this);    
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(QBrush("#393939"));
    painter.setOpacity(0.7);
    painter.drawRect(0,0,width(),height());
    painter.setOpacity(1);
    painter.drawPixmap(QRect(100,50,width()-200,height()-150), QPixmap(":/graphicItems/background_window_1.png"));


    painter.drawPixmap(QRect(ui->button_useObject->x(), ui->button_heavyAttack->y(), ui->button_useObject->width()*3, ui->button_heavyAttack->height()*3),
                       QPixmap(":/graphicItems/buttons_background.png"));

    painter.setBrush(QBrush("#434343"));
    painter.setPen(QPen(QBrush("#FFFFFF"), 3));

    painter.drawLine(ui->img_monster->x()+ui->img_monster->width()/2, mLifeMonster->y()-10,
                     mLifeMonster->x()+mLifeMonster->width()+50, mLifeMonster->y()-10);

    painter.drawEllipse(QRect(ui->img_monster->x()-15, ui->img_monster->y()-15, ui->img_monster->width()+30, ui->img_monster->height()+30));

    painter.setPen(QPen(QBrush("#ffd800"),1));

    QString buff = "";
    float stamina = static_cast<float>(ui->data_playerStamina->value());
    painter.drawText(QRect(ui->data_playerStamina->x()-10, ui->data_playerStamina->y()+ui->data_playerStamina->height(), 30, 20), Qt::AlignCenter,  buff.asprintf("%d", static_cast<int>(stamina)));
    if(stamina < mHero->getStamina().maxStamina){
        int heightReach = static_cast<int>(ui->data_playerStamina->y()+ui->data_playerStamina->height() - static_cast<float>(stamina/mHero->getStamina().maxStamina * ui->data_playerStamina->height()));
        painter.drawLine(ui->data_playerStamina->x()-10, heightReach, ui->data_playerStamina->x()+ui->data_playerStamina->width()+10, heightReach);
    }
    painter.drawText(QPoint(ui->button_useObject->x()+ui->button_useObject->width()+5, ui->button_useObject->y()+ui->button_useObject->height()/2+2), "150");
    painter.drawText(QPoint(ui->button_heavyAttack->x()+ui->button_heavyAttack->width()/2-10, ui->button_heavyAttack->y()+ui->button_heavyAttack->height()+15), "140");
    painter.drawText(QPoint(ui->button_lightAttack->x()-18, ui->button_lightAttack->y()+ui->button_lightAttack->height()/2+2), "110");
    painter.drawText(QPoint(ui->button_flee->x()+ui->button_flee->width()/2-10, ui->button_flee->y()-5), "200");

    QFont font;
    font.setPixelSize(20);
    painter.setFont(font);
    painter.setPen(QPen(QBrush("#FFFFFF"),1));

    painter.drawText(QPoint(ui->img_monster->x()+ui->img_monster->width()+40, mLifeMonster->y()+mLifeMonster->height()+25), buff.asprintf("%d/%d", mLifeMonster->value(), mMonster->getLife().maxLife));

    painter.setPen(QPen("#2944AD"));
    painter.drawText(QPoint(ui->data_heroMana->x()+10, ui->data_heroMana->y()+ui->data_heroMana->height()+25), buff.asprintf("%d/%d", ui->data_heroMana->value(), mHero->getMana().maxMana));    
    painter.setPen(QPen("#308D32"));
    painter.drawText(mLifeHero->x()+10,  mLifeHero->y()-10, buff.asprintf("%d/%d", mHero->getLife().curLife, mHero->getLife().maxLife));
    painter.setPen(QPen(QBrush("#FFFFFF"), 1));

    if(mDodge){
        painter.setFont(QFont("Sitka Small", 15));
        painter.drawText(mLifeHero->x()+mLifeHero->width()*2/3, mLifeHero->y()-10, "Esquive");
    }else if(mFleeFail){
        painter.setFont(QFont("Sitka Small", 15));
        painter.drawText(mLifeHero->x()+mLifeHero->width()*2/3, mLifeHero->y()-10, "Échec");
    }
    if(mBreak){
        painter.setFont(QFont("Sitka Small", 15));
        painter.drawText(ui->buttonPause->x()-290, ui->buttonPause->y()+ui->buttonPause->height()-13, "Combat mis en Pause");
    }
}

void Win_Fight::on_buttonPause_clicked()
{
    if(mBreak){
        mBreak = false;
        t_heroStaminaRecovery->start(static_cast<int>(300.0*(static_cast<qreal>(abs(mHero->getAttackSpeed()-11.0))/5.0)));
        t_monsterStaminaRecovery->start(100);
        enableButtons(true);
    }else{
        mBreak = true;
        t_heroStaminaRecovery->stop();
        t_monsterStaminaRecovery->stop();
        enableButtons(false);
    }
    update();
}

void Win_Fight::hideAnimation()
{
    if(w_fightAnimation)
        delete w_fightAnimation;
    w_fightAnimation = nullptr;
}

void Win_Fight::restoreMonsterImage()
{
    ui->image_fight->setPixmap(mMonster->getFightImage(0));
}

void Win_Fight::heroDodged()
{
    mDodge = true;
    update();
    t_restoreDodge->start(800);
}

void Win_Fight::restoreHeroDodged()
{
    mDodge = false;
    update();
}

void Win_Fight::heroFailToFlee()
{
    mFleeFail = true;
    update();
    t_restoreFlee->start(800);
}

void Win_Fight::restoreHeroFlee()
{
    mFleeFail = false;
    update();
}


















LifeProgressBar::LifeProgressBar(QWidget * parent, Character * entity, int height):
    QProgressBar (parent),
    mEntity(entity),
    mOldLife(entity->getLife().curLife)
{
    setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed));
    setMinimumHeight(height);
    setMaximumHeight(height);
    setTextVisible(false);
    setRange(0, entity->getLife().maxLife);
    setValue(entity->getLife().curLife);
    setStyleSheet("QProgressBar{background-color:rgba(0,0,0,0);border:2px solid white;border-radius:5px;}"
                  "QProgressBar::chunk{background-color:qlineargradient(x0: 0, x2: 1,"
                    "stop: 0 #194621, stop: 1 #194621);"
                    "border-radius:5px;}"
                  );

    t_hideLifeLost = new QTimer(this);
    connect(t_hideLifeLost, SIGNAL(timeout()), this, SLOT(setLife()));

    show();
}

LifeProgressBar::~LifeProgressBar()
{

}

void LifeProgressBar::lifeChanged()
{
    qreal value = 0;
    QString buff = "", str_ValueInf = "0.00", str_ValueSup ="0.01";
    if(mEntity->getLife().curLife > 0)
    {
        value = static_cast<qreal>(mEntity->getLife().curLife)/static_cast<qreal>(mOldLife);
        str_ValueInf = buff.asprintf("%1.2f", value);
        str_ValueSup = buff.asprintf("%1.2f", value+0.01);
    }

    // Bug to find
    if(value > 1)
        return;

    // Display damage took in white
    setStyleSheet("QProgressBar{background-color:rgba(0,0,0,0);border:2px solid white;border-radius:5px;}"
                  "QProgressBar::chunk{background-color:qlineargradient(x0: 0, x2: 1,"
                    "stop: 0 #194621, stop: " + str_ValueInf + " #194621,"
                    "stop: " + str_ValueSup + " #FFFFFF, stop: 1 #FFFFFF);"
                    "border-radius:5px;}"
                  );

    // Timer to hide damage took
    t_hideLifeLost->start(1000);
}

void LifeProgressBar::setLife()
{
    mOldLife = mEntity->getLife().curLife;
    setValue(mEntity->getLife().curLife);
    setStyleSheet("QProgressBar{background-color:rgba(0,0,0,0);border:2px solid white;border-radius:5px;}"
                  "QProgressBar::chunk{background-color:qlineargradient(x0: 0, x2: 1,"
                    "stop: 0 #194621, stop: 1 #194621);"
                    "border-radius:5px;}"
                  );
}
