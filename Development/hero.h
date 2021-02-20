#ifndef HERO_H
#define HERO_H

#include "character.h"
#include "equipment.h"
#include "bag.h"
class Map;

class Hero : public Character
{
    Q_OBJECT

public:
    struct HeroMovementHandler{
        qreal angle;
        QPointF destPos;
        QTimer * t_move;
        QPointF lastPos;
    };

    struct Experience{
        int points;
        int level;
        int pointsToLevelUp;
    };

public:
    Hero();
    ~Hero();
signals:
    void sig_equipmentChanged();
    void sig_bagEvent();
    void sig_bagFull();
    void sig_coinChanged();
    void sig_experienceChanged();
    void sig_heroMoved();
    void sig_showHeroData();
    void sig_ThrowItem(Item*);
    void sig_dodge();
    void sig_playSound(int);
private slots:
    void move();
public:
    Bag * getBag();
    Gear * getGear();
    int getCoin();
    Experience getExperience();

    void setGear(Gear*);
    void setPayload(int);
    void setCoin(int);
    void setIsInVillage(bool);
public:
    void useConsumable(Consumable*);
    bool takeItem(Item*);
    void throwItem(Item*);
    qreal calculateDamage();
    int getAttackSpeed();
    void takeDamage(int);
    void addCoin(int);
    bool removeCoin(int);
    bool addExperience(int);
    void levelUpHero();
    void startMovingTo(int,int);
    void stopMoving();
    void interactWithPNG(bool);
    bool isInteractingWithPNG();
    bool isInVillage();
    bool isDead();
    void freeze(bool);
    bool isFreeze();
public:
   HeroMovementHandler moveHandler;
protected:
   Bag * mBag;
   Gear * mGear;
   int mCoin;
   Experience mExperience;
   int mImageSelected;
   bool mInteractionPNG;
   bool mIsInVillage;
   bool mFreeze;
};


class SwordMan : public Hero
{
    Q_OBJECT
public:
    SwordMan(QString);
    ~SwordMan();
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};


#endif // HERO_H
