#ifndef MAPEVENT_H
#define MAPEVENT_H

#include <QGraphicsPixmapItem>
#include <qrandom.h>
#include <QPainter>
#include <QTimer>
#include <QDebug>
#include "mapitem.h"
#include "itemgenerator.h"
#include "toolfunctions.h"

#include "constants.h"

class MapEvent : public MapItem
{
    Q_OBJECT
public:
    MapEvent();
    ~MapEvent();
public:
    QList<Item*> getItems();
    QList<Item*> takeItems();
    Item * takeItem(Item*);
    void returnItems(QList<Item*>);
    bool eventIsActive();

    virtual void itemsTook()=0;
protected:
    QList<Item*> mItems;
};

class FishingEvent : public MapEvent
{
    Q_OBJECT
public:
    FishingEvent();
    ~FishingEvent();
public slots:
    void animate();
    void startAnimation();
public:
    bool isAnimated();

    void itemsTook();
    bool isObstacle();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void initGraphicStuff();
private:
    QList<Fish*> generateRandomFishes();
protected:
    int mNextFrame;
    QTimer * t_animation;
    QTimer * t_startAnimation;
    QList<Item*> mFishes;
};

class BushEvent : public MapEvent
{
    Q_OBJECT
public:
    BushEvent();
    ~BushEvent();
public slots:
    void animate();
public:
    void startAnimation();
    bool isAnimated();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void restoreGraphicStuff();
protected:
    int mNextFrame;
    QTimer * t_animation;
};

class BushEventCoin : public BushEvent
{
    Q_OBJECT
public:
    BushEventCoin();
    ~BushEventCoin();
public:
    bool isObstacle();
    void itemsTook();
private:
    void initGraphicStuff();
};

class BushEventEquipment : public BushEvent
{
    Q_OBJECT
public:
    BushEventEquipment(ItemGenerator*);
    ~BushEventEquipment();
public:
    bool isObstacle();
    void itemsTook();
private:
    void initGraphicStuff();
};

class OreSpot : public MapEvent
{
protected:
    enum Ore{
        none,
        stone,
        iron,
        saphir,
        emerald,
        rubis
    };
public:
    OreSpot();
    ~OreSpot();
public:
    void itemsTook();
    bool isObstacle();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void initGraphicStuff();
protected:
    Ore mType;
};

class StoneOreSpot : public OreSpot
{
public:
    StoneOreSpot();
    ~StoneOreSpot();
};

class IronOreSpot : public OreSpot
{
public:
    IronOreSpot();
    ~IronOreSpot();
};

class SaphirOreSpot : public OreSpot
{
public:
    SaphirOreSpot();
    ~SaphirOreSpot();
};

class EmeraldOreSpot : public OreSpot
{
public:
    EmeraldOreSpot();
    ~EmeraldOreSpot();
};

class RubisOreSpot : public OreSpot
{
public:
    RubisOreSpot();
    ~RubisOreSpot();
};

class ChestEvent : public MapEvent
{
    Q_OBJECT
public:
    ChestEvent(ItemGenerator*);
    ~ChestEvent();
signals:
    void sig_clicToOpenChest(ChestEvent*);
public:
    void removeItem(Item*);
    QList<Item*> getItems();
    void revealChest();
    bool isRevealed();
    void openChest(bool);
    bool isOpen();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void itemsTook();
    bool isObstacle();
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
private:
    void setShape();
protected:
    bool mIsOpen;
    int mRevealChest;
    bool mHover;
};

class ChestBurried : public ChestEvent
{
    Q_OBJECT
public:
    ChestBurried(ItemGenerator*);
    ~ChestBurried();
private:
    void initGraphicStuff();
};

class GoblinChest : public ChestEvent
{
    Q_OBJECT
public:
    GoblinChest(ItemGenerator*);
    ~GoblinChest();
private:
    void initGraphicStuff();
};

#endif // MAPEVENT_H
