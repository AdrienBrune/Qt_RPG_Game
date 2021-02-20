#include "win_inventory.h"
#include "ui_win_inventory.h"

Win_Inventory::Win_Inventory(QWidget *parent, Hero * hero) :
    QWidget(parent),
    mHero(hero),
    mItemShownRect(QRect(0,0,0,0)),
    mItemSelected(0),
    ui(new Ui::Win_inventory)
{
    ui->setupUi(this);
    ui->item_info->setWordWrap(true);
    mItemToDisplay = nullptr;

    mItemsContainer = new Frag_Interface_ItemSorter(this);
    connect(mItemsContainer, SIGNAL(sig_itemThrown(Item*)), this, SIGNAL(sig_itemThrown(Item*)));
    connect(mItemsContainer, SIGNAL(sig_itemClicked(ItemQuickDisplayer*)), this, SLOT(showItem(ItemQuickDisplayer*)));
    connect(mItemsContainer, SIGNAL(sig_itemHoverIn(ItemQuickDisplayer*)), this, SLOT(showItemHover(ItemQuickDisplayer*)));
    connect(mItemsContainer, SIGNAL(sig_itemHoverOut(ItemQuickDisplayer*)), this, SLOT(hideItemHover(ItemQuickDisplayer*)));
    ui->layoutItems->addWidget(mItemsContainer);

    Bag * bag = hero->getBag();
    QList<Weapon*> weapons = bag->getWeapons();
    for(Weapon * w : weapons)
    {
        mItemsContainer->addItem(w);
    }
    QList<Tool*> tools = bag->getTools();
    for(Tool * t : tools)
    {
        mItemsContainer->addItem(t);
    }
    QList<ArmorPiece*> armorPieces = bag->getArmorPieces();
    for(ArmorPiece * a : armorPieces)
    {
        mItemsContainer->addItem(a);
    }
    QList<Consumable*> consumables = bag->getConsumables();
    for(Consumable * c : consumables)
    {
        mItemsContainer->addItem(c);
    }
    QList<Material*> materials = bag->getMaterials();
    for(Material * m : materials)
    {
        mItemsContainer->addItem(m);
    }

    hide();

}

void Win_Inventory::showItem(ItemQuickDisplayer * item)
{
    if(item == nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
        ui->item_info->setStyleSheet("QLabel{}");
        ui->item_info->setText("");
        return;
    }

    ItemQuickDisplayer * lastItemSelected = mItemsContainer->getSelectedItem();

    mItemsContainer->unselectItems();

    if(mItemToDisplay != nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
    }

    mItemToDisplay = new W_ItemDisplayer(this, item->getItem());
    mItemToDisplay->setGeometry(mItemShownRect);
    connect(mItemToDisplay, SIGNAL(sig_itemUsed(Item*)), this, SLOT(useItem(Item*)));
    mItemToDisplay->show();

    ui->item_info->setStyleSheet("QLabel{border-image:url(:/graphicItems/background_itemInfo.png);padding:20px;color:#FFFFFF;}");
    ui->item_info->setText(item->getItem()->getInformation());

    if(lastItemSelected != nullptr && lastItemSelected == item)
    {
        mItemSelected = 0;
        item->setItemSelected(false);

    }else{
        mItemSelected = 1;
        item->setItemSelected(true);
    }
}

void Win_Inventory::showItemHover(ItemQuickDisplayer * item)
{
    if(item == nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
        ui->item_info->setStyleSheet("QLabel{}");
        ui->item_info->setText("");
        return;
    }

    if(mItemSelected != 0)
        return;

    if(mItemToDisplay != nullptr)
        delete mItemToDisplay;

    mItemToDisplay = new W_ItemDisplayer(this, item->getItem());
    mItemToDisplay->setGeometry(mItemShownRect);

    mItemToDisplay->show();

    ui->item_info->setStyleSheet("QLabel{border-image:url(:/graphicItems/background_itemInfo.png);padding:20px;color:#FFFFFF;}");
    ui->item_info->setText(item->getItem()->getInformation());
}

void Win_Inventory::hideItemHover(ItemQuickDisplayer * item)
{
    if(item == nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
        ui->item_info->setStyleSheet("QLabel{}");
        ui->item_info->setText("");
        return;
    }

    if(mItemSelected != 0)
        return;

    if(mItemToDisplay != nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
    }
    ui->item_info->setStyleSheet("QLabel{}");
    ui->item_info->setText("");
}

void Win_Inventory::useItem(Item * item)
{
    mItemsContainer->unselectItems();
    mItemSelected = 0;

    if(mItemToDisplay != nullptr)
    {
        delete mItemToDisplay;
        mItemToDisplay = nullptr;
    }
    ui->item_info->setStyleSheet("QLabel{}");
    ui->item_info->setText("");

    Consumable * consumable = dynamic_cast<Consumable*>(item);
    if(consumable)
    {
        mItemsContainer->removeQuickItemDisplayer(item);
        mHero->useConsumable(consumable);
        return;
    }
    Tool * tool = dynamic_cast<Tool*>(item);
    if(tool)
    {
        emit sig_useTool(tool);
        closeInventory();
        return;
    }
}

void Win_Inventory::on_buttonExit_clicked()
{
    closeInventory();
}

void Win_Inventory::diplayInventory()
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(400);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);

    QPropertyAnimation *b = new QPropertyAnimation(this,"geometry");
    b->setDuration(500);
    b->setStartValue(QRect(this->x()+this->width(),this->y(),this->width(),this->height()));
    b->setEndValue(QRect(this->x(),this->y(),this->width(),this->width()));
    b->start(QPropertyAnimation::DeleteWhenStopped);

    show();

    mItemShownRect = QRect(150,30,height()*2/9,height()*2/9);
}

void Win_Inventory::closeInventory()
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(400);
    a->setStartValue(1);
    a->setEndValue(0);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);

    QPropertyAnimation *b = new QPropertyAnimation(this,"geometry");
    b->setDuration(500);
    b->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    b->setEndValue(QRect(this->x()+this->width(),this->y(),this->width(),this->width()));
    b->start(QPropertyAnimation::DeleteWhenStopped);

    QTimer * timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(timer, SIGNAL(timeout()), this, SIGNAL(sig_closeWindow()));
    timer->start(1000);
}

void Win_Inventory::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setOpacity(0.9);

    painter.setBrush(QBrush("#393939"));
    painter.drawPixmap(QRect(ui->buttonExit->width()/2, 0, width()-ui->buttonExit->width()/2, height()), QPixmap(":/graphicItems/background_window_2.png"));
    painter.setBrush(QBrush("#ECECEC"));
    painter.drawRect(QRect(ui->buttonExit->width()/2, 0, ui->buttonExit->width()/4, height()));

    painter.drawPixmap(QRect(60,30,width()-100,250),QPixmap(":/graphicItems/deco_bag.png"));

    if(mItemToDisplay){
        painter.setBrush(QBrush("#393939"));
        painter.setPen(QPen("#FFFFFF"));
        painter.drawRect(mItemShownRect);
        painter.drawPixmap(QRect(mItemShownRect.x()-15,mItemShownRect.y()-15,mItemShownRect.width()+30,mItemShownRect.height()+30),QPixmap(":/graphicItems/item_borders.png"));
    }

    painter.setOpacity(1);
    painter.setBrush(QBrush());
    painter.setPen(QPen(QBrush(Qt::white), 3));
    painter.drawRect(QRect(mItemsContainer->x(), mItemsContainer->y(), mItemsContainer->width(), mItemsContainer->height()));
}

Win_Inventory::~Win_Inventory()
{
    delete ui;
}

