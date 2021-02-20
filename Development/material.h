#ifndef MATERIAL_H
#define MATERIAL_H

#include "item.h"

class Material : public Item
{
public:
    Material(QString name, QPixmap image, int weight, int price);
    ~Material();
public:
    Feature getFirstCaracteristic();
    Feature getSecondCaracteristic();
    Feature getThirdCaracteristic();
    Feature getFourthCaracteristic();
public:
    virtual int invokeType()=0;
};

class StoneOre : public Material
{
public:
    StoneOre();
    ~StoneOre();
public:
    int invokeType();
};

class IronOre : public Material
{
public:
    IronOre();
    ~IronOre();
public:
    int invokeType();
};

class SaphirOre : public Material
{
public:
    SaphirOre();
    ~SaphirOre();
public:
    int invokeType();
};

class EmeraldOre : public Material
{
public:
    EmeraldOre();
    ~EmeraldOre();
public:
    int invokeType();
};

class RubisOre : public Material
{
public:
    RubisOre();
    ~RubisOre();
public:
    int invokeType();
};

class MonsterMaterial : public Material
{

public:
    MonsterMaterial(QString name, QPixmap image, int weight, int price);
    ~MonsterMaterial();
};

class WolfPelt : public MonsterMaterial
{
public:
    WolfPelt();
    ~WolfPelt();
public:
    int invokeType();
};

class WolfAlphaPelt : public MonsterMaterial
{
public:
    WolfAlphaPelt();
    ~WolfAlphaPelt();
public:
    int invokeType();
};

class WolfFang : public MonsterMaterial
{
public:
    WolfFang();
    ~WolfFang();
public:
    int invokeType();
};

class WolfMeat : public MonsterMaterial
{
public:
    WolfMeat();
    ~WolfMeat();
public:
    int invokeType();
};

class GoblinEar : public MonsterMaterial
{
public:
    GoblinEar();
    ~GoblinEar();
public:
    int invokeType();
};

class GoblinBones : public MonsterMaterial
{
public:
    GoblinBones();
    ~GoblinBones();
public:
    int invokeType();
};

class BearPelt : public MonsterMaterial
{
public:
    BearPelt();
    ~BearPelt();
public:
    int invokeType();
};

class BearMeat : public MonsterMaterial
{
public:
    BearMeat();
    ~BearMeat();
public:
    int invokeType();
};

class BearClaw : public MonsterMaterial
{
public:
    BearClaw();
    ~BearClaw();
public:
    int invokeType();
};

class TrollMeat : public MonsterMaterial
{
public:
    TrollMeat();
    ~TrollMeat();
public:
    int invokeType();
};

class TrollSkull : public MonsterMaterial
{
public:
    TrollSkull();
    ~TrollSkull();
public:
    int invokeType();
};

class OggreSkull : public MonsterMaterial
{
public:
    OggreSkull();
    ~OggreSkull();
public:
    int invokeType();
};

class LaoshanlungHeart : public MonsterMaterial
{
public:
    LaoshanlungHeart();
    ~LaoshanlungHeart();
public:
    int invokeType();
};

#endif // MATERIAL_H
