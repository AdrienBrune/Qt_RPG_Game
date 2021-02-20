#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "item.h"
#include "material.h"

class Equipment : public Item
{
public:
    Equipment(QString name, QPixmap image, int weight, int price);
    ~Equipment();
};




class EquipmentToForge
{
public:
    struct Loot{
        Material * material;
        int quantities;
    };
public:
    EquipmentToForge(Equipment*, QList<Loot>);
    ~EquipmentToForge();
public:
    Equipment * getEquipment();
    QList<Loot> getLootList();
private:
    Equipment * mEquipment;
    QList<Loot> mLoots;
};





class Weapon : public Equipment
{
    Q_OBJECT
public:
    Weapon(QString name, QPixmap image, int damage, int speed, int weight, int price);
    ~Weapon();
public:
    int getDamage();
    int getSpeed();
    void setDamage(int);
    void setSpeed(int);
public:
    Feature getFirstCaracteristic();
    Feature getSecondCaracteristic();
    Feature getThirdCaracteristic();
    Feature getFourthCaracteristic();
private:
    int mDamage;
    int mSpeed;
};

class Sword : public Weapon
{
public:
    Sword(QString name, QPixmap image, int damage, int speed, int weight, int price, QString info);
    ~Sword();
};





class ArmorPiece : public Equipment
{
    Q_OBJECT
public:
    ArmorPiece(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price);
    ~ArmorPiece();
public:
    int getDefense();
    qreal getDodgingStat();

    void setDefense(int);
    void setDodgingStat(qreal);
public:
    Feature getFirstCaracteristic();
    Feature getSecondCaracteristic();
    Feature getThirdCaracteristic();
    Feature getFourthCaracteristic();
private:
    int mDefense;
    qreal mDodgingStat;
};

class Helmet : public ArmorPiece
{
public:
    Helmet(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Helmet();
};

class Breastplate : public ArmorPiece
{
public:
     Breastplate(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Breastplate();
};

class Gloves : public ArmorPiece
{
public:
    Gloves(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Gloves();
};

class Pant : public ArmorPiece
{
public:
    Pant(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Pant();
};

class Footwears : public ArmorPiece
{
public:
    Footwears(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Footwears();
};

class Amulet : public ArmorPiece
{
public:
    Amulet(QString name, QPixmap image, int defense, qreal dodgingStats, int weight, int price, QString info);
    ~Amulet();
};






class Gear : public QObject
{
    Q_OBJECT
public:
    Gear();
    Gear(Helmet*, Breastplate*, Gloves*, Pant*, Footwears*, Amulet*, Weapon*);
    ~Gear();
signals:
    void sig_equipmentSet();
public:
    Helmet *getHelmet();
    Breastplate *getBreastplate();
    Gloves * getGloves();
    Pant * getPant();
    Footwears * getFootWears();
    Amulet *getAmulet();
    Weapon *getWeapon();

    void setArmor(Helmet*,Breastplate*,Gloves*,Pant*,Footwears*,Amulet*);
    void setEquipment(Equipment*);
    bool removeEquipment(Equipment*);
public:
    int weight();
    qreal dodgingStat();
    int defenseStat();
    int damageStat();
private:
    QList<Equipment*> mEquipmentParts;
};



#endif // EQUIPMENT_H
