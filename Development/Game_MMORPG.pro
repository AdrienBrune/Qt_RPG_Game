#-------------------------------------------------
#
# Project created by QtCreator 2020-11-20T20:21:11
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game_MMORPG
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        bag.cpp \
        character.cpp \
        consumable.cpp \
        ctrwindow.cpp \
        equipment.cpp \
        frag_interface_gear.cpp \
        frag_interface_itemsorter.cpp \
        frag_interface_itemtrader.cpp \
        frag_interface_potionpreferencies.cpp \
        frag_loot_displayer.cpp \
        frag_stats_displayer.cpp \
        helpdialog.cpp \
        hero.cpp \
        item.cpp \
        itemgenerator.cpp \
        main.cpp \
        map.cpp \
        mapevent.cpp \
        mapitem.cpp \
        material.cpp \
        monster.cpp \
        soundmanager.cpp \
        toolfunctions.cpp \
        village.cpp \
        village_goblin.cpp \
        w_animation_exploration.cpp \
        w_animation_fight.cpp \
        w_animation_forge.cpp \
        w_animation_night.cpp \
        w_dialogpannel.cpp \
        w_interface_herostats.cpp \
        w_itemdisplayer.cpp \
        w_usetool.cpp \
        win_fight.cpp \
        win_gear.cpp \
        win_interface_trading.cpp \
        win_inventory.cpp

HEADERS += \
        bag.h \
        character.h \
        constants.h \
        consumable.h \
        ctrwindow.h \
        equipment.h \
        frag_interface_gear.h \
        frag_interface_itemsorter.h \
        frag_interface_itemtrader.h \
        frag_interface_potionpreferencies.h \
        frag_loot_displayer.h \
        frag_stats_displayer.h \
        helpdialog.h \
        hero.h \
        item.h \
        itemgenerator.h \
        map.h \
        mapevent.h \
        mapitem.h \
        material.h \
        monster.h \
        soundmanager.h \
        toolfunctions.h \
        village.h \
        village_goblin.h \
        w_animation_exploration.h \
        w_animation_fight.h \
        w_animation_forge.h \
        w_animation_night.h \
        w_dialogpannel.h \
        w_interface_herostats.h \
        w_itemdisplayer.h \
        w_usetool.h \
        win_fight.h \
        win_gear.h \
        win_interface_trading.h \
        win_inventory.h

FORMS += \
        ctrwindow.ui \
        frag_interface_gear.ui \
        frag_interface_itemsorter.ui \
        frag_interface_itemtrader.ui \
        frag_interface_potionpreferencies.ui \
        frag_loot_displayer.ui \
        frag_stats_displayer.ui \
        helpdialog.ui \
        w_interface_herostats.ui \
        w_showinformation.ui \
        w_showmonsterdata.ui \
        w_showpotentialaction.ui \
        win_alchemist.ui \
        win_blacksmith.ui \
        win_chest.ui \
        win_fight.ui \
        win_gear.ui \
        win_inventory.ui \
        win_merchant.ui

RESOURCES += \
    ressources/res.qrc

CONFIG += resources_big

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
