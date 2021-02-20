#include "hero.h"

Hero::Hero():
    Character (),
    mIsInVillage(false),
    mFreeze(false)
{    
    setZValue(Z_HERO);
    mNextFrame = 0;
    moveHandler.t_move = new QTimer(this);
    connect(moveHandler.t_move, SIGNAL(timeout()), this, SLOT(move()));
    t_animation = new QTimer(this);
    connect(t_animation, SIGNAL(timeout()), this, SLOT(setNextFrame()));
    setTransformOriginPoint(boundingRect().center());
}

void Hero::startMovingTo(int x, int y)
{
    moveHandler.t_move->start(TIMER_MOVE);
    moveHandler.destPos = QPointF(x,y);
    moveHandler.lastPos = pos();

    if(moveHandler.angle > 180 && moveHandler.angle < 320){
        setTransform(QTransform(-1, 0, 0, 1, boundingRect().width(), 0));
    }else{
        setTransform(QTransform());
    }

    if(moveHandler.angle < 40){
        mImageSelected = HERO_TOP;
    }else if(moveHandler.angle < 70){
        mImageSelected = HERO_RIGHT;
    }else if(moveHandler.angle < 110){
        mImageSelected = HERO_RIGHT;
    }else if(moveHandler.angle < 140){
        mImageSelected = HERO_RIGHT;
    }else if(moveHandler.angle < 220){
        mImageSelected = HERO_BOT;
    }else if(moveHandler.angle < 250){
        mImageSelected = HERO_LEFT;
    }else if(moveHandler.angle < 290){
        mImageSelected = HERO_LEFT;
    }else if(moveHandler.angle < 320){
        mImageSelected = HERO_LEFT;
    }else{
        mImageSelected = HERO_TOP;
    }
}

void Hero::stopMoving()
{
    moveHandler.t_move->stop();
    moveHandler.destPos = QPointF(x(),y());
    mImageSelected = HERO_STAND;
    mNextFrame = 0;
}

void Hero::interactWithPNG(bool toggle)
{
    mInteractionPNG = toggle;
}

bool Hero::isInteractingWithPNG()
{
    return mInteractionPNG;
}

bool Hero::isInVillage()
{
    return mIsInVillage;
}

bool Hero::isDead()
{
    if(mLife.curLife <= 0){
        return true;
    }else{
        return false;
    }
}

void Hero::freeze(bool toggle)
{
    if(toggle)
    {
        mFreeze = true;
        moveHandler.destPos = moveHandler.lastPos;
    }else
        mFreeze = false;
}

bool Hero::isFreeze()
{
    return mFreeze;
}

void Hero::move()
{
    double dx = static_cast<double>(SPEED_HERO)*qSin(qDegreesToRadians(moveHandler.angle));
    double dy = -static_cast<double>(SPEED_HERO)*qCos(qDegreesToRadians(moveHandler.angle));
    setPos(x()+dx, y()+dy);

    if( (abs(moveHandler.destPos.x() - x()) < 1)  || (abs(moveHandler.destPos.y() - y()) < 1) ){
        stopMoving();
    }

    emit sig_heroMoved();

    QList<QGraphicsItem*> list = collidingItems();
    for(QGraphicsItem * item : list)
    {
        MapItem * mapItem = dynamic_cast<MapItem*>(item);
        if(mapItem){
            if(mapItem->isObstacle()){
                setPos(moveHandler.lastPos);
                stopMoving();
                return;
            }
            Bush * bush = dynamic_cast<Bush*>(item);
            if(bush)
            {
                if(y()+this->boundingRect().height() < mapItem->y()+mapItem->boundingRect().height()*3/4){
                    mapItem->setZValue(Z_HERO+1);
                }else {
                    mapItem->setZValue(Z_BUSH);
                }
                if(!bush->isAnimated()){
                    emit sig_movedInBush(bush);
                }
                continue;
            }
            BushEventCoin * bushCoinEvent = dynamic_cast<BushEventCoin*>(item);
            if(bushCoinEvent)
            {
                if(y()+this->boundingRect().height() < mapItem->y()+mapItem->boundingRect().height()*3/4){
                    mapItem->setZValue(Z_HERO+1);
                }else {
                    mapItem->setZValue(Z_BUSH);
                }
                if(!bushCoinEvent->isAnimated()){
                    emit sig_movedInBushEvent(bushCoinEvent);
                }
                continue;
            }
            BushEventEquipment * bushEquipmentEvent = dynamic_cast<BushEventEquipment*>(item);
            if(bushEquipmentEvent)
            {
                if(y()+this->boundingRect().height() < mapItem->y()+mapItem->boundingRect().height()*3/4){
                    mapItem->setZValue(Z_HERO+1);
                }else {
                    mapItem->setZValue(Z_BUSH);
                }
                if(!bushEquipmentEvent->isAnimated()){
                    emit sig_movedInBushEvent(bushEquipmentEvent);
                }
                continue;
            }
        }
    }
    moveHandler.lastPos = pos();
}

Bag *Hero::getBag()
{
    return mBag;
}

Gear * Hero::getGear()
{
    return mGear;
}

int Hero::getCoin()
{
    return mCoin;
}

Hero::Experience Hero::getExperience()
{
    return mExperience;
}

void Hero::setGear(Gear * gear)
{
    mGear = gear;
}

void Hero::setCoin(int coin)
{
    mCoin = coin;
    emit sig_coinChanged();
}

void Hero::setIsInVillage(bool toggle)
{
    mIsInVillage = toggle;
}

void Hero::useConsumable(Consumable * item)
{
    emit sig_playSound(SOUND_DRINK);
    PotionLife * potionLife = dynamic_cast<PotionLife*>(item);
    if(potionLife)
    {
        setLife(getLife().curLife+potionLife->getCapacity());
    }
    PotionMana * potionMana = dynamic_cast<PotionMana*>(item);
    if(potionMana)
    {
        setMana(getMana().curMana+potionMana->getCapacity());
    }
    PotionStamina * potionStamina = dynamic_cast<PotionStamina*>(item);
    if(potionStamina)
    {
        setStaminaMax(getStamina().maxStamina+potionStamina->getCapacity());
    }
    PotionStrenght * potionStrength = dynamic_cast<PotionStrenght*>(item);
    if(potionStrength)
    {
        getBag()->setMaximumPayload(getBag()->getPayload().max+item->getCapacity());
    }
    RedFish * redFish = dynamic_cast<RedFish*>(item);
    if(redFish)
    {
        setLife(getLife().curLife+redFish->getCapacity());
    }
    CommonFish * fish = dynamic_cast<CommonFish*>(item);
    if(fish)
    {
        setLife(getLife().curLife+fish->getCapacity());
    }
    Yellowfish * yellowFish = dynamic_cast<Yellowfish*>(item);
    if(yellowFish)
    {
        setLife(getLife().curLife+yellowFish->getCapacity());    }
    BlueFish * blueFish = dynamic_cast<BlueFish*>(item);
    if(blueFish)
    {
        setMana(getMana().curMana+blueFish->getCapacity());
    }

    mBag->removeItem(item);
}

bool Hero::takeItem(Item * item)
{
    BagCoin * coins = dynamic_cast<BagCoin*>(item);
    if(coins){
        sig_playSound(SOUND_PICK_OBJECT);
        addCoin(item->getPrice());
        item->deleteLater();
        item = nullptr;
        return false;
    }else{
        if(!mBag->addItem(item))
        {
            emit sig_ThrowItem(item);
            return false;
        }else{
            sig_playSound(SOUND_PICK_OBJECT);
            return true;
        }
    }
}

void Hero::throwItem(Item * item)
{
    mBag->removeItem(item);
}

qreal Hero::calculateDamage()
{
    return (1+(mExperience.level*0.1))*mGear->damageStat();
}

int Hero::getAttackSpeed()
{
    if(getGear()->getWeapon()!=nullptr){
        return getGear()->getWeapon()->getSpeed();
    }else{
        return 10;
    }
}

void Hero::takeDamage(int damage)
{
    if(qrand()%100 > mGear->dodgingStat()){
        setLife(getLife().curLife - static_cast<int>((1.0 - static_cast<qreal>(mGear->defenseStat())/HERO_DEFENSE_MAX)*static_cast<qreal>(damage)));
    }else{
        emit sig_dodge();
    }
}

void Hero::addCoin(int coin)
{
    mCoin += coin;
    emit sig_coinChanged();
}

bool Hero::removeCoin(int coin)
{
    if(mCoin >= coin){
        mCoin -= coin;
        emit sig_coinChanged();
        return true;
    }
    return false;
}

bool Hero::addExperience(int exp)
{
    if( (mExperience.points += exp) >= mExperience.pointsToLevelUp){
        mExperience.level++;
        mExperience.points -= mExperience.pointsToLevelUp;
        mExperience.pointsToLevelUp += mExperience.pointsToLevelUp/4;
        levelUpHero();
        emit sig_experienceChanged();
        return true;
    }
    emit sig_experienceChanged();
    return false;
}

void Hero::levelUpHero()
{
    setLifeMax(getLife().maxLife+5);
    setLife(getLife().curLife+5);
    getBag()->setMaximumPayload(getBag()->getPayload().max+2);
    setStamina(getStamina().maxStamina+2);
}

Hero::~Hero()
{

}









SwordMan::SwordMan(QString name):
    Hero ()
{
    mName = name;
    mLife = Life{200,200};
    mMana = Mana{80,80};
    mStamina = Stamina{200,200};

    mBoundingRect = QRect(0,0,100,100);
    QPolygon polygon;
    static const int points[] = {
        50, 100,
        25, 90,
        30, 50,
        30, 20,
        70, 20,
        70, 50,
        80, 90
    };
    polygon.setPoints(7, points);
    mShape.addPolygon(polygon);

    mGear = new Gear();
    connect(mGear, SIGNAL(sig_equipmentSet()), this, SIGNAL(sig_equipmentChanged()));
    mGear->setEquipment(new Weapon("baton", QPixmap(":/equipment/sword_stick.png"), 5, 8, 5, 1));
    mBag = new Bag();
    connect(mBag, SIGNAL(sig_bagEvent()), this, SIGNAL(sig_bagEvent()));
    connect(mBag, SIGNAL(sig_bagFull()), this, SIGNAL(sig_bagFull()));
    mCoin = 1000;
    mExperience = Experience{0,1,10};
    mImage = QPixmap(":/characters/swordman/swordman_logo.png");
    mCurrentPixmap = QPixmap(":/characters/swordman/swordman.png");
    mNumberFrame = 4;
    mImageSelected = HERO_STAND;
    t_animation->start(150);
}

void SwordMan::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(0,0, mCurrentPixmap, static_cast<int>(mNextFrame*boundingRect().width()), static_cast<int>(mImageSelected*boundingRect().height()), static_cast<int>(boundingRect().width()), static_cast<int>(boundingRect().height()));
    Q_UNUSED(widget)
    Q_UNUSED(option)
}

SwordMan::~SwordMan()
{
    delete mGear;
    delete mBag;
}



