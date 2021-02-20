#include "material.h"

Material::Material(QString name, QPixmap image, int weight, int price):
    Item(name, image, weight, price)
{

}

Material::~Material()
{

}

Item::Feature Material::getFirstCaracteristic()
{
    return Feature{getPrice(),QPixmap(":/icons/coin_logo.png")};
}

Item::Feature Material::getSecondCaracteristic()
{
    return Feature{getWeight(),QPixmap(":/icons/payload_logo.png")};
}

Item::Feature Material::getThirdCaracteristic()
{
    return Feature{-1,QPixmap("")};
}

Item::Feature Material::getFourthCaracteristic()
{
    return Feature{-1,QPixmap("")};
}



MonsterMaterial::MonsterMaterial(QString name, QPixmap image, int weight, int price):
    Material (name, image, weight, price)
{

}

StoneOre::StoneOre():
    Material("Minerai de pierre", QPixmap(":/materials/stoneOre.png"), 3, 4)
{
    setInformation("Minerai très commun mais toujours très utile.");
    Item::setShape();
}

StoneOre::~StoneOre()
{

}

int StoneOre::invokeType()
{
    return MATERIAL_STONE_ORE;
}

IronOre::IronOre():
    Material("Minerai de fer", QPixmap(":/materials/ironOre.png"), 5, 8)
{
    setInformation("Minerai idéal pour la confaction d'armes et d'armures.");
    Item::setShape();
}

IronOre::~IronOre()
{

}

int IronOre::invokeType()
{
    return MATERIAL_IRON_ORE;
}

SaphirOre::SaphirOre():
    Material("Saphir", QPixmap(":/materials/saphirOre.png"), 5, 15)
{
    setInformation("Minerai époustouflant. Cette gemme est constituée d'un bleu profond.");
    Item::setShape();
}

SaphirOre::~SaphirOre()
{

}

int SaphirOre::invokeType()
{
    return MATERIAL_SAPHIR_ORE;
}

EmeraldOre::EmeraldOre():
    Material("Emeraude", QPixmap(":/materials/emeraldOre.png"), 5, 20)
{
    setInformation("Minerai époustouflant. Cette gemme est constituée d'un vert vif.");
    Item::setShape();
}

EmeraldOre::~EmeraldOre()
{

}

int EmeraldOre::invokeType()
{
    return MATERIAL_EMERALD_ORE;
}

RubisOre::RubisOre():
    Material("Rubis", QPixmap(":/materials/rubisOre.png"), 5, 25)
{
    setInformation("Minerai époustouflant. Cette gemme est constituée d'un rouge transcendant.");
    Item::setShape();
}

RubisOre::~RubisOre()
{

}

int RubisOre::invokeType()
{
    return MATERIAL_RUBIS_ORE;
}




MonsterMaterial::~MonsterMaterial()
{

}

WolfPelt::WolfPelt():
    MonsterMaterial ("Fourure de loup", QPixmap(":/monsters/wolf/wolf_pelt.png"), 5, 20)
{
    setInformation("Fourrure de qualité. C'est une ressource très recherchée par les marchants.");
    Item::setShape();
}

WolfPelt::~WolfPelt()
{

}

int WolfPelt::invokeType()
{
    return WOLF_PELT;
}

WolfFang::WolfFang():
    MonsterMaterial ("Croc de loup", QPixmap(":/monsters/wolf/wolf_fang.png"), 1, 7)
{
    setInformation("Croc de loup adapté pour déchirer la chair.");
    Item::setShape();
}

WolfFang::~WolfFang()
{

}

int WolfFang::invokeType()
{
    return WOLF_FANG;
}

WolfMeat::WolfMeat():
    MonsterMaterial ("Viande de loup", QPixmap(":/monsters/wolf/wolf_meat.png"), 5, 12)
{
    setInformation("Morceau de viande provenant d'un loup.");
    Item::setShape();
}

WolfMeat::~WolfMeat()
{

}

int WolfMeat::invokeType()
{
    return WOLF_MEAT;
}

GoblinEar::GoblinEar():
    MonsterMaterial ("Oreille de gobelin", QPixmap(":/monsters/goblin/goblin_ear.png"), 3, 5)
{
    setInformation("Oreille de gobelin ayant très peu d'utilité.");
    Item::setShape();
}

GoblinEar::~GoblinEar()
{

}

int GoblinEar::invokeType()
{
    return GOBLIN_EAR;
}

GoblinBones::GoblinBones():
    MonsterMaterial ("Os de gobelin", QPixmap(":/monsters/goblin/goblin_bones.png"), 3, 6)
{
    setInformation("Os de gobelin pouvant servir à la création de babioles.");
    Item::setShape();
}

GoblinBones::~GoblinBones()
{

}

int GoblinBones::invokeType()
{
    return GOBLIN_BONES;
}

BearPelt::BearPelt():
    MonsterMaterial ("Fourrure d'ours", QPixmap(":/monsters/bear/bear_pelt.png"), 10, 55)
{
    setInformation("Fourrure de qualité. C'est une ressource très recherchée par les marchants.");
    Item::setShape();
}

BearPelt::~BearPelt()
{

}

int BearPelt::invokeType()
{
    return BEAR_PELT;
}

BearMeat::BearMeat():
    MonsterMaterial ("Viande d'ours", QPixmap(":/monsters/bear/bear_meat.png"), 5, 35)
{
    setInformation("Morceau de viande provenant d'un ours.");
    Item::setShape();
}

BearMeat::~BearMeat()
{

}

int BearMeat::invokeType()
{
    return BEAR_MEAT;
}

BearClaw::BearClaw():
    MonsterMaterial ("Griffe d'ours", QPixmap(":/monsters/bear/bear_claw.png"), 5, 15)
{
    setInformation("Griffe d'ours aussi tranchante qu'un rasoir.");
    Item::setShape();
}

BearClaw::~BearClaw()
{

}

int BearClaw::invokeType()
{
    return BEAR_TALON;
}

TrollMeat::TrollMeat():
    MonsterMaterial("Viande de troll", QPixmap(":/monsters/troll/troll_meat.png"), 5, 2)
{
    setInformation("Viande répugnante.");
    Item::setShape();
}

TrollMeat::~TrollMeat()
{

}

int TrollMeat::invokeType()
{
    return TROLL_MEAT;
}

TrollSkull::TrollSkull():
    MonsterMaterial("Crâne de troll", QPixmap(":/monsters/troll/troll_skull.png"), 6, 10)
{
    setInformation("Crâne de troll qui saura trouver preneur chez un collectionneur.");
    Item::setShape();
}

TrollSkull::~TrollSkull()
{

}

int TrollSkull::invokeType()
{
    return TROLL_SKULL;
}

OggreSkull::OggreSkull():
    MonsterMaterial("Crâne de troll", QPixmap(":/monsters/oggre/oggre_skull.png"), 6, 20)
{
    setInformation("Crâne d'oggre qui saura trouver preneur chez un collectionneur.");
    Item::setShape();
}

OggreSkull::~OggreSkull()
{

}

int OggreSkull::invokeType()
{
    return OGGRE_SKULL;
}

WolfAlphaPelt::WolfAlphaPelt():
    MonsterMaterial ("Fourrure\nde loup Alpha", QPixmap(":/monsters/wolf/wolfAlpha_pelt.png"), 5, 40)
{
    setInformation("Fourrure de loup alpha. C'est une ressource très recherchée par les marchants.");
    Item::setShape();
}

WolfAlphaPelt::~WolfAlphaPelt()
{

}

int WolfAlphaPelt::invokeType()
{
    return WOLFALPHA_PELT;
}


LaoshanlungHeart::LaoshanlungHeart():
    MonsterMaterial ("Coeur de\nLao Shan Lung", QPixmap(":/monsters/laoshanlung/laoshanlung_heart.png"), 20, 500)
{
    setInformation("Coeur de Lao Shan Lung. Composant d'une valeur inestimable.");
    Item::setShape();
}

LaoshanlungHeart::~LaoshanlungHeart()
{

}

int LaoshanlungHeart::invokeType()
{
    return LAOSHANLUNG_HEART;
}
