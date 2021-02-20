#ifndef BAG_H
#define BAG_H

#include <QObject>
#include "item.h"
#include "equipment.h"
#include "consumable.h"
#include "material.h"

class Bag : public QObject
{
    Q_OBJECT
public:
    struct Payload{
        int max;
        int current;
    };
public:
    Bag();
    ~Bag();
signals:
    void sig_bagFull();
    void sig_bagEvent();
public:
    void setMaximumPayload(int);
    bool addItem(Item*);
    bool itemIsInBag(Item*);
    void removeItem(Item*);
    Item * takeItem(Item*);
    QList<Item*> getItems();
    QList<Consumable*> getConsumables();
    QList<Weapon*> getWeapons();
    QList<ArmorPiece*> getArmorPieces();
    QList<MonsterMaterial*> getMonsterMaterials();
    QList<Material*> getMaterials();
    QList<Tool*> getTools();
    Payload getPayload();
    Item * getShovel();
    Item * getPickaxe();
    Item * getFishingrod();
private:
    Payload mPayload;
    QList<Item*> mItems;
};

#endif // BAG_H
