#ifndef CONSTANTS_H
#define CONSTANTS_H

// Speed definitions
#define SPEED_HERO          3
#define SPEED_WOLF          1
#define SPEEDBOOST_WOLF     5
#define SPEED_GOBLIN        1
#define SPEEDBOOST_GOBLIN   3
#define SPEED_BEAR          2
#define SPEEDBOOST_BEAR     6
#define SPEED_TROLL         1
#define SPEEDBOOST_TROLL    2
#define SPEED_OGGRE         1
#define SPEEDBOOST_OGGRE    4
#define SPEED_LAOSHANLUNG   1
#define SPEEDBOOST_LAOSHANLUNG  3

#define MOVING_TIME_MIN 3000
#define MOVING_TIME_MAX 10000

#define TIMER_MOVE          15
#define TIMER_MONSTERS_MOVE 30
#define TIMER_MONSTERS_ACTION (2000/NUM_MONSTERS)
#define TIMER_COLLISION     500
#define DELAY_BETWEEN_ACTION 2000
#define TIME_TO_SHOW_ITEM   1400

#define DISTANCE_AGGRO  700
#define DISTANCE_SOUND  700

#define MOVE_RANDOMLY       0
#define MOVE_STOP           1
#define MOVE_AGGRO_PLAYER   2

#define MAP_WIDTH   15000
#define MAP_HEIGHT  15000

#define HERO_DEFENSE_MAX    1000
#define HERO_RAW_DAMAGE     5

#define NUM_WOLFPACK        8
#define NUM_GOBLIN          30
#define NUM_BEAR            20
#define NUM_TROLL           20
#define NUM_OGGRE           8

#define NUM_GROUND          220
#define NUM_FLOWERS         20
#define NUM_TREES           250
#define NUM_TREES_FALLEN    80
#define NUM_BUSHES          800
#define NUM_ROCKS           200
#define NUM_PLANK           50
#define NUM_STONE           80
#define NUM_LAKES           5

#define NUM_BUSHES_COIN_EVENT       40
#define NUM_BUSHES_EQUIPMENT_EVENT  20
#define NUM_CHEST_BURRIED_EVENT     8
#define NUM_STONE_ORE               15
#define NUM_IRON_ORE                10
#define NUM_SAPHIR_ORE              4
#define NUM_EMERALD_ORE             3
#define NUM_RUBIS_ORE               2

#define DIRECTION_LEFT  0
#define DIRECTION_RIGHT 1

// Number of different ressources per picture/MapItem
#define RES_TREE        10
#define RES_TREE_FALLEN 5
#define RES_BUSH        6
#define RES_ROCK        5
#define RES_FLOWERS     15
#define RES_GROUND      31
#define RES_PLANK       6
#define RES_STONE       9
#define RES_LAKE        1
#define RES_ORE_SPOT    5

#define Z_GROUND        1
#define Z_GROUND_FOREGROUND 2
#define Z_CHEST_BURRIED 3
#define Z_ORESPOT       3
#define Z_PLANK         4
#define Z_STONE         5
#define Z_ROCK          6
#define Z_BUSH          7
#define Z_TREE_FALLEN   8
#define Z_TREE          16
#define Z_ITEM          Z_GROUND_FOREGROUND
#define Z_ITEM_FOREGROUND Z_HERO-4
#define Z_LAKE          8
#define Z_FISH_EVENT    Z_LAKE+1

#define Z_VILLAGE       Z_HERO-4
#define Z_MONSTER_BACKGROUND 10
#define Z_MONSTERS      11
#define Z_MONSTER_FOREGROUND 12
#define Z_HERO          14

// Sounds
#define SOUND_BUSH_SHAKED                   0
#define SOUND_BUSH_SHAKED_EVENT_EQUIPMENT   1
#define SOUND_BUSH_SHAKED_EVENT_COIN        2
#define SOUND_START_FIGHT                   3
#define SOUND_CLIC_MONSTER_STAT             4
#define SOUND_WOLF                          5
#define SOUND_WOLF_AGGRO                    6
#define SOUND_WOLF_HEAVYATTACK              7
#define SOUND_WOLF_LIGHTATTACK              8
#define SOUND_WOLF_ROAR                     9
#define SOUND_WOLF_DIE                      10
#define SOUND_BEAR                          11
#define SOUND_BEAR_AGGRO                    12
#define SOUND_BEAR_HEAVYATTACK              13
#define SOUND_BEAR_LIGHTATTACK              14
#define SOUND_BEAR_ROAR                     15
#define SOUND_BEAR_DIE                      16
#define SOUND_GOBLIN                        17
#define SOUND_GOBLIN_AGGRO                  18
#define SOUND_GOBLIN_HEAVYATTACK            19
#define SOUND_GOBLIN_LIGHTATTACK            20
#define SOUND_GOBLIN_ROAR                   21
#define SOUND_GOBLIN_DIE                    22
#define SOUND_EQUIP                         23
#define SOUND_MOVE_ROCK                     24
#define SOUND_MOVE_PLANK                    25
#define SOUND_HERO_ATTACK                   26
#define SOUND_BUY                           27
#define SOUND_FORGE                         28
#define SOUND_OPENCHEST                     29
#define SOUND_CLOSECHEST                    30
#define SOUND_TROLL                         31
#define SOUND_TROLL_AGGRO                   32
#define SOUND_TROLL_HEAVYATTACK             33
#define SOUND_TROLL_LIGHTATTACK             34
#define SOUND_TROLL_ROAR                    35
#define SOUND_TROLL_DIE                     36
#define SOUND_OGGRE                         37
#define SOUND_OGGRE_AGGRO                   38
#define SOUND_OGGRE_HEAVYATTACK             39
#define SOUND_OGGRE_LIGHTATTACK             40
#define SOUND_OGGRE_ROAR                    41
#define SOUND_OGGRE_DIE                     42
#define SOUND_PICK_OBJECT                   43
#define SOUND_DRINK                         44
#define SOUND_LAOSHANLUNG                   45
#define SOUND_LAOSHANLUNG_AGGRO             46
#define SOUND_LAOSHANLUNG_HEAVYATTACK       47
#define SOUND_LAOSHANLUNG_LIGHTATTACK       48
#define SOUND_LAOSHANLUNG_ROAR              49
#define SOUND_LAOSHANLUNG_DIE               50
#define SOUND_TREE_FALL                     51
#define SOUND_ROCK_CRUSH                    52

#define MUSICEVENT_START_DAY    0
#define MUSICEVENT_CLOSE_FIGHT  1
#define MUSICEVENT_ENTER_GOBLIN_VILLAGE 2

// Sound type emit by monsters
#define HEAVY_ATTACK    0
#define LIGHT_ATTACK    1
#define ROAR            2
#define DIE             3
#define SOUND           4
#define AGGRO           5

#define ITEM_TYPE_CONSUMABLE    0
#define ITEM_TYPE_WEAPON        1
#define ITEM_TYPE_ARMOR         2
#define ITEM_TYPE_MATERIAL      3
#define ITEM_TYPE_COINS         4

#define HERO_STAND      0
#define HERO_BOT        1
#define HERO_LEFT       3
#define HERO_RIGHT      3
#define HERO_TOP        4

#define NOT_ATTRIBUATE      0
#define WOLF_PELT           1
#define WOLF_FANG           2
#define WOLF_MEAT           3
#define GOBLIN_EAR          4
#define GOBLIN_BONES        5
#define BEAR_PELT           6
#define BEAR_MEAT           7
#define BEAR_TALON          8
#define TROLL_SKULL         9
#define TROLL_MEAT          10
#define OGGRE_SKULL         11
#define WOLFALPHA_PELT      12
#define LAOSHANLUNG_HEART   13

#define MATERIAL_STONE_ORE      50
#define MATERIAL_IRON_ORE       51
#define MATERIAL_SAPHIR_ORE     52
#define MATERIAL_EMERALD_ORE    53
#define MATERIAL_RUBIS_ORE      54

#define BORDERS_COLOR   "#1c1c1c"


#endif // CONSTANTS_H
