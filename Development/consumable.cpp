#include "consumable.h"

Consumable::Consumable(QString name, QPixmap image, int weight, int price, int capacity):
    Item(name, image, weight, price),
    mCapacity(capacity)
{

}

int Consumable::getCapacity()
{
    return mCapacity;
}

void Consumable::setCapacity(int capacity)
{
    mCapacity = capacity;
    emit sig_itemStatsChanged();
}

Item::Feature Consumable::getFirstCaracteristic()
{
    return Feature{getCapacity(),QPixmap(":/icons/potion_logo.png")};
}

Item::Feature Consumable::getSecondCaracteristic()
{
    return Feature{getWeight(),QPixmap(":/icons/payload_logo.png")};
}

Item::Feature Consumable::getThirdCaracteristic()
{
    return Feature{getPrice(),QPixmap(":/icons/coin_logo.png")};
}

Item::Feature Consumable::getFourthCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Consumable::~Consumable()
{

}

#include <QDebug>
PotionLife::PotionLife():
    Consumable ("Potion de vie", QPixmap(":/consumables/potionLife.png"), 5, 5, 100)
{
    setInformation("Potion de guérison pour soigner vos blessures");
    Item::setShape();
}

PotionLife::~PotionLife()
{

}

PotionMana::PotionMana():
    Consumable ("Potion de mana", QPixmap(":/consumables/potionMana.png"), 5, 6, 100)
{
    setInformation("Potion vous rendant du mana");
    Item::setShape();
}

PotionMana::~PotionMana()
{

}

PotionStamina::PotionStamina():
    Consumable ("Potion de vitalité", QPixmap(":/consumables/potionStamina.png"), 4, 7, 5)
{
    setInformation("Potion renforçant votre vitalité.\nPermet d'augmenter l'endurance maximale du héro");
    Item::setShape();
}

PotionStamina::~PotionStamina()
{

}

PotionStrenght::PotionStrenght():
    Consumable ("Potion de force", QPixmap(":/consumables/potionStrenght.png"), 5, 8, 5)
{
    setInformation("Potion renforçant votre force brute.\nPermet d'augmenter la charge maximale d'objets portée par le héro");
    Item::setShape();
}

PotionStrenght::~PotionStrenght()
{

}

Fish::Fish(QString name, QPixmap image, int weight, int price, int capacity):
    Consumable (name, image, weight, price, capacity)
{

}

Fish::~Fish()
{

}

RedFish::RedFish():
    Fish("Poisson rouge", QPixmap(":/consumables/fish_red.png"), 4, 4, 40)
{
    setInformation("Poisson possédant des vertues de guérison.");
    Item::setShape();
}

RedFish::~RedFish()
{

}

BlueFish::BlueFish():
    Fish("Poisson bleu", QPixmap(":/consumables/fish_blue.png"), 4, 5, 30)
{
    setInformation("Poisson possédant des vertues magiques.");
    Item::setShape();
}

BlueFish::~BlueFish()
{

}

Yellowfish::Yellowfish():
    Fish("Poisson jaune", QPixmap(":/consumables/fish_yellow.png"), 4, 15, 10)
{
    setInformation("Poisson d'un jaune magnifique.\nVous pouvez le manger pour vous restaurer quelques points de vie.");
    Item::setShape();
}

Yellowfish::~Yellowfish()
{

}

CommonFish::CommonFish():
    Fish("Poisson commun", QPixmap(":/consumables/fish_common.png"), 4, 3, 10)
{
    setInformation("Poisson commun.\nVous pouvez le manger pour vous restaurer quelques points de vie.");
    Item::setShape();
}

CommonFish::~CommonFish()
{

}
