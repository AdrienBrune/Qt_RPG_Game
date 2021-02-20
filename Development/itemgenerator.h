#ifndef ITEMGENERATOR_H
#define ITEMGENERATOR_H

#include "equipment.h"
#include "consumable.h"
#include "material.h"

class ItemGenerator
{
public:
    ItemGenerator();
    ~ItemGenerator();
public:
    Sword * generateRandomSword();
    Helmet * generateRandomHelmet();
    Breastplate * generateRandomBreastplate();
    Gloves * generateRandomGloves();
    Pant * generateRandomPant();
    Footwears * generateRandomFootwears();
    Amulet * generateRandomAmulet();
    Consumable * generateRandomConsumable();
    Item * generateEquipment();
private:
    QList<Sword*> mSwords;
    QList<Helmet*> mHelmets;
    QList<Breastplate*> mBreastplates;
    QList<Gloves*> mGloves;
    QList<Pant*> mPants;
    QList<Footwears*> mFootwears;
    QList<Amulet*> mAmulets;
};

#endif // ITEMGENERATOR_H
