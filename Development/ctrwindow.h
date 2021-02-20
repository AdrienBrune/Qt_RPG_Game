#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QTimer>
#include <QLabel>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>
#include <QWidget>

#include "hero.h"
#include "monster.h"
#include "mapitem.h"
#include "mapevent.h"
#include "map.h"
#include "soundmanager.h"
#include "w_dialogpannel.h"
#include "w_interface_herostats.h"
#include "w_animation_exploration.h"
#include "equipment.h"
#include "win_inventory.h"
#include "win_gear.h"
#include "win_interface_trading.h"
#include "win_fight.h"
#include "w_usetool.h"
#include "w_animation_night.h"
#include "helpdialog.h"
#include "itemgenerator.h"

namespace Ui {
class CTRWindow;
}

class CTRWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit CTRWindow(QWidget *parent = nullptr);
    ~CTRWindow();
private slots:
    void GoToMonsterFight(Monster*);
    void scrollSceneView();
    void removeCurrentPanel();
    void displayMonsterData(Monster*);
    void displayCalamitySpawned();
    void fightResult(Character*);
    void explorationCompleted();
    void on_Inventory_clicked();
    void hideInventary();
    void indicateBagFull();
    void on_Gear_clicked();
    void hideInventaryGear();
    void hideFightWindow();
    void showReplenish(QObject*);
    void useTool(Tool*);
    void unuseTool();
    void on_buttonHelp_clicked();
    void showBagFull();
    void showItemOnGround(Item*);
    void showItemPicked(Item*);
    void openInterface(QGraphicsItem*);
    void showPNJinfo(QGraphicsItem*);
    void on_pushButton_clicked();

public:
    void displayPanel(W_DialogPannel *);
    void displayInterfaceTrading(Win_Interface_Trading*);
    void setButtonsEnable(bool);
protected :
    virtual bool eventFilter(QObject *, QEvent *);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *event);
private:
    Map * mMap;
    Hero * mHero;
    SoundManager * mSoundManager;
    ItemGenerator * mGameItems;
    bool heroIsSearching;
    QTimer * t_unfreezeMap;
private:
    W_Interface_HeroStats * w_heroStats;
    W_DialogPannel * w_panel;
    W_Animation_exploration * w_explorationLoading;
    Win_Inventory * w_inventory;
    Win_Gear * w_gear;
    Win_Fight * w_fight;
    Win_Interface_Trading * w_trading;
    W_UseTool * w_tool;
public:
    Ui::CTRWindow *ui;
};

#endif // MAINWINDOW_H
