#ifndef WIN_FIGHT_H
#define WIN_FIGHT_H

#include <QWidget>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include <QProgressBar>
#include "hero.h"
#include "monster.h"
#include "w_animation_fight.h"
#include "w_itemdisplayer.h"

class LifeProgressBar : public QProgressBar
{
    Q_OBJECT
public:
    explicit LifeProgressBar(QWidget * parent = nullptr, Character * entity = nullptr, int height = 45);
    ~LifeProgressBar();
public slots:
    void lifeChanged();
    void setLife();
private:
    Character * mEntity;
    int mOldLife;
    QTimer * t_hideLifeLost;
};






namespace Ui {
class Win_Fight;
}

class Win_Fight : public QWidget
{
    Q_OBJECT

private:

    struct LifeChangeAnimation{
        int lifeToReach;
        QTimer * timer;
    };

    struct ManaChangeAnimation{
        int manaToReach;
        QTimer * timer;
    };

public:
    explicit Win_Fight(QWidget *parent = nullptr, Hero * hero = nullptr, Monster * monster = nullptr);
    ~Win_Fight();
signals:
    void sig_playSound(int);
    void sig_closeWindow();
    void sig_endFight(Character*);
private slots:
    void on_button_heavyAttack_clicked();
    void on_button_useObject_clicked();
    void on_button_lightAttack_clicked();
    void on_button_flee_clicked();
    void manaChangeAnimationHero();
    void manaAnimationHero();
    void heroStaminaRecovery();
    void monsterStaminaRecovery();
    void monsterStaminaRecovered();
    void enableNewAction();
    void useConsumable(ItemQuickDisplayer*);
    void on_buttonPause_clicked();
    void hideAnimation();
    void restoreMonsterImage();
    void heroDodged();
    void restoreHeroDodged();
    void heroFailToFlee();
    void restoreHeroFlee();
public:
    void displayInterface();
    void hideInterface();
private:
    void initInterface();
    void loadFightAnimationsPixmap();
    bool heroUseStamina(int);
    void monsterUseStamina(int);
    void heroStaminaRecovered();
    void enableButtons(bool);
    void enableItemsUtilisation(bool);
    void addConsumablesOnScreen();
    void checkFightIssue();
protected:
    void paintEvent(QPaintEvent *event);

private:
    Hero * mHero;
    Monster * mMonster;
    QList<ItemQuickDisplayer*> mConsumables;
    LifeProgressBar * mLifeMonster;
    LifeProgressBar * mLifeHero;
    ManaChangeAnimation heroMana;
    QTimer * t_heroStaminaRecovery;
    QTimer * t_monsterStaminaRecovery;
    QTimer * t_buttonsDelayer;
    QTimer * t_restoreMonsterImage;
    QGraphicsScene * mScenePotion;
    QPixmap pMonsterHeavyAttack;
    QPixmap pMonsterLightAttack;
    QTimer * t_deleteAnimation;
    QTimer * t_restoreDodge;
    QTimer * t_restoreFlee;
    bool mDodge;
    bool mFleeFail;
    bool mBreak;
    W_Animation_Fight * w_fightAnimation;
private:
    Ui::Win_Fight *ui;
};

#endif // WIN_FIGHT_H
