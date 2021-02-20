#include "item.h"

Item::Item(QString name, QPixmap image, int weight, int price):
    QObject (),
    QGraphicsPixmapItem (),
    mName(name),
    mImage(image),
    mWeight(weight),    
    mPrice(price),
    mInformation(QString()),
    mHover(false),
    mShape(QPainterPath())
{
    setZValue(Z_ITEM);
    setAcceptHoverEvents(true);
    t_delayHover = new QTimer(this);
    t_delayHover->setSingleShot(true);
    connect(t_delayHover, SIGNAL(timeout()), this, SLOT(showItemInfo()));
}

Item::~Item()
{

}

void Item::showItemInfo()
{
    emit sig_showItemInfo(this);
}

QString Item::getName()
{
    return mName;
}

int Item::getWeight()
{
    return mWeight;
}

QPixmap Item::getImage()
{
    return mImage;
}

int Item::getPrice()
{
    return mPrice;
}

QString Item::getInformation()
{
    return mInformation;
}

void Item::setShape()
{
    QGraphicsPixmapItem * tmp = new QGraphicsPixmapItem(this);
    tmp->setPixmap(mImage.scaled(static_cast<int>(boundingRect().width()), static_cast<int>(boundingRect().height())));
    mShape = tmp->shape();
    delete tmp;
}

void Item::setName(QString name)
{
    mName = name;
    emit sig_itemStatsChanged();
}

void Item::setweight(int weight)
{
    mWeight = weight;
    emit sig_itemStatsChanged();
}

void Item::setPrice(int price)
{
    if(price <= 0)
        mPrice = 1;
    else
        mPrice = price;
    emit sig_itemStatsChanged();
}

void Item::setInformation(QString info)
{
    mInformation = info;
}

void Item::setHover(bool toggle)
{
    mHover = toggle;
    update();
}

QPainterPath Item::shape() const
{
    QPainterPath path;
    path.addEllipse(QRect(0,0,static_cast<int>(boundingRect().width()),static_cast<int>(boundingRect().height())));
    return path;
}

QRectF Item::boundingRect() const
{
    return QRect(0,0,50,50);
}

void Item::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHint(QPainter::Antialiasing);
    painter->drawPixmap(0,0, static_cast<int>(boundingRect().width()), static_cast<int>(boundingRect().height()), mImage);

    if(mHover){
        painter->setPen(QPen(QBrush(BORDERS_COLOR), 2));
        painter->drawPath(mShape);
    }

    Q_UNUSED(widget)
    Q_UNUSED(option)
}

void Item::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(t_delayHover->isActive())
            t_delayHover->stop();
        sig_itemClicked(this);
        event->accept();
    }else{
        event->ignore();
    }
}

void Item::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
{
    if(event->HoverEnter == QGraphicsSceneHoverEvent::HoverEnter)
    {
        mHover = true;
        update();
        event->accept();
        t_delayHover->start(TIME_TO_SHOW_ITEM);
    }
}

void Item::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
{
    if(event->HoverLeave == QGraphicsSceneHoverEvent::HoverLeave)
    {
        if(t_delayHover->isActive())
            t_delayHover->stop();
        mHover = false;
        update();
        event->accept();
    }
}






Tool::Tool(QString name, QPixmap image, int weight, int price):
    Item(name, image, weight, price)
{
    mDurability = qrand()%(5-3)+3;
}

bool Tool::use()
{
    mDurability--;
    if(mDurability<=0)
        return false;
    else{
        return true;
    }
}

Item::Feature Tool::getFirstCaracteristic()
{
    return Feature{getPrice(), QPixmap(":/icons/coin_logo.png")};
}

Item::Feature Tool::getSecondCaracteristic()
{
    return Feature{getWeight(), QPixmap(":/icons/payload_logo.png")};
}

Item::Feature Tool::getThirdCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Item::Feature Tool::getFourthCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Tool::~Tool()
{

}

Shovel::Shovel():
    Tool("Pelle", QPixmap(":/tools/shovel.png"), 10, 10)
{
    setInformation("Outil permettant de creuser et de déterrer des objects cachés.");
    Item::setShape();
}

bool Shovel::use()
{
    return Tool::use();
}

int Shovel::invokeType()
{
    return TOOL_SHOVEL;
}

Shovel::~Shovel()
{

}

Pickaxe::Pickaxe():
    Tool("Pioche", QPixmap(":/tools/pickaxe.png"), 10, 10)
{
    setInformation("Outil permettant de miner du minerai.");
    Item::setShape();
}

Pickaxe::~Pickaxe()
{

}

bool Pickaxe::use()
{
    return Tool::use();
}

int Pickaxe::invokeType()
{
    return TOOL_PICKAXE;
}

FishingRod::FishingRod():
    Tool("Canne à pêche", QPixmap(":/tools/fishingrod.png"), 10, 10)
{
    setInformation("Outil permettant de pêcher dans les lacs.");
    Item::setShape();
}

bool FishingRod::use()
{
    return Tool::use();
}

int FishingRod::invokeType()
{
    return TOOL_FISHINGROD;
}

FishingRod::~FishingRod()
{

}

Compass::Compass():
    Tool("Boussole", QPixmap(":/tools/compass.png"), 10, 7)
{
    setInformation("Boussole qui vous permettra de retrouver le chemin du village avec séreinité.");
    Item::setShape();
}

Compass::~Compass()
{

}

bool Compass::use()
{
    return true;
}

int Compass::invokeType()
{
    return TOOL_COMPASS;
}

Knife::Knife():
    Tool("Couteau", QPixmap(":/tools/knife.png"), 10, 20)
{
    setInformation("Couteau servant à dépecer animaux et monstres.");
    Item::setShape();
}

Knife::~Knife()
{

}

bool Knife::use()
{
    return true;
}

int Knife::invokeType()
{
    return TOOL_KNIFE;
}






BagCoin::BagCoin(int coinAmount):
    Item("Sac de pièces", QPixmap(":/consumables/bagCoin.png"), 0, coinAmount)
{
    QString buff = "";
    setInformation("Sac contenant " + buff.asprintf("%d", mPrice) + " pièces d'or.");
    Item::setShape();
}

BagCoin::~BagCoin()
{

}

Item::Feature BagCoin::getFirstCaracteristic()
{
    return Feature{getPrice(),QPixmap(":/icons/coin_logo.png")};
}

Item::Feature BagCoin::getSecondCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Item::Feature BagCoin::getThirdCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Item::Feature BagCoin::getFourthCaracteristic()
{
    return Feature{-1,QPixmap("")};
}
