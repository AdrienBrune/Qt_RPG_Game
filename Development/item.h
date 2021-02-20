#ifndef ITEM_H
#define ITEM_H

#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QPainterPath>
#include "constants.h"

#define TOOL_COMPASS    0
#define TOOL_PICKAXE    1
#define TOOL_FISHINGROD 2
#define TOOL_SHOVEL     3
#define TOOL_KNIFE      4

class Item : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    struct Feature{
        int value;
        QPixmap logo;
    };

public:
    Item(QString name,QPixmap image, int weight, int price);
    ~Item();
signals:
    void sig_itemStatsChanged();
    void sig_itemClicked(Item*);
    void sig_showItemInfo(Item*);
private slots:
    void showItemInfo();
public:
    QString getName();
    int getWeight();
    QPixmap getImage();
    int getPrice();
    QString getInformation();
    void setShape();
    void setName(QString);
    void setweight(int);
    void setImage(QPixmap);
    void setPrice(int);
    void setInformation(QString);
    void setHover(bool toggle);
public:
    QPainterPath shape() const;
    QRectF boundingRect()const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
public:
    virtual Feature getFirstCaracteristic()=0;
    virtual Feature getSecondCaracteristic()=0;
    virtual Feature getThirdCaracteristic()=0;
    virtual Feature getFourthCaracteristic()=0;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
protected:
    QString mName;
    QPixmap mImage;
    int mWeight;
    int mPrice;
    QString mInformation;
    int mHover;
    QPainterPath mShape;
    QTimer * t_delayHover;
};

class BagCoin : public Item
{
public:
    BagCoin(int);
    ~BagCoin();
public:
    Feature getFirstCaracteristic();
    Feature getSecondCaracteristic();
    Feature getThirdCaracteristic();
    Feature getFourthCaracteristic();
};






class Tool : public Item
{
public:
    Tool(QString name, QPixmap image, int weight, int price);
    ~Tool();
public:
    bool use();
public:
    Feature getFirstCaracteristic();
    Feature getSecondCaracteristic();
    Feature getThirdCaracteristic();
    Feature getFourthCaracteristic();
    virtual int invokeType()=0;
protected:
    int mDurability;
};

class Shovel : public Tool
{
public:
    Shovel();
    ~Shovel();
public :
    bool use();
    int invokeType();
};

class Pickaxe : public Tool
{
public:
    Pickaxe();
    ~Pickaxe();
public :
    bool use();
    int invokeType();
};

class FishingRod : public Tool
{
public:
    FishingRod();
    ~FishingRod();
public :
    bool use();
    int invokeType();
};

class Compass : public Tool
{
public:
    Compass();
    ~Compass();
public :
    bool use();
    int invokeType();
};

class Knife : public Tool
{
public:
    Knife();
    ~Knife();
public :
    bool use();
    int invokeType();
};

#endif // ITEM_H
