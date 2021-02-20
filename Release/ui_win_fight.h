/********************************************************************************
** Form generated from reading UI file 'win_fight.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_FIGHT_H
#define UI_WIN_FIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_Fight
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *layout_monsterLife;
    QLabel *img_monster;
    QHBoxLayout *horizontalLayout_4;
    QLabel *image_fight;
    QVBoxLayout *verticalLayout_4;
    QPushButton *buttonPause;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout;
    QPushButton *button_useObject;
    QPushButton *button_lightAttack;
    QPushButton *button_heavyAttack;
    QPushButton *button_flee;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *data_playerStamina;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *img_player;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layout_heroLife;
    QProgressBar *data_heroMana;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Win_Fight)
    {
        if (Win_Fight->objectName().isEmpty())
            Win_Fight->setObjectName(QString::fromUtf8("Win_Fight"));
        Win_Fight->resize(1708, 1023);
        Win_Fight->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(Win_Fight);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(130, 70, 130, 70);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 5, 5, 80);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layout_monsterLife = new QHBoxLayout();
        layout_monsterLife->setSpacing(25);
        layout_monsterLife->setObjectName(QString::fromUtf8("layout_monsterLife"));
        layout_monsterLife->setContentsMargins(30, -1, -1, -1);
        img_monster = new QLabel(Win_Fight);
        img_monster->setObjectName(QString::fromUtf8("img_monster"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(img_monster->sizePolicy().hasHeightForWidth());
        img_monster->setSizePolicy(sizePolicy);
        img_monster->setMinimumSize(QSize(200, 200));
        img_monster->setMaximumSize(QSize(200, 200));
        img_monster->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:100px;\n"
"}"));

        layout_monsterLife->addWidget(img_monster);

        layout_monsterLife->setStretch(0, 1);

        verticalLayout_3->addLayout(layout_monsterLife);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(50, 30, 50, 30);
        image_fight = new QLabel(Win_Fight);
        image_fight->setObjectName(QString::fromUtf8("image_fight"));
        sizePolicy.setHeightForWidth(image_fight->sizePolicy().hasHeightForWidth());
        image_fight->setSizePolicy(sizePolicy);
        image_fight->setMinimumSize(QSize(800, 400));
        image_fight->setMaximumSize(QSize(800, 400));
        image_fight->setStyleSheet(QString::fromUtf8(""));
        image_fight->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(image_fight, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 1);

        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 20, 20);
        buttonPause = new QPushButton(Win_Fight);
        buttonPause->setObjectName(QString::fromUtf8("buttonPause"));
        sizePolicy.setHeightForWidth(buttonPause->sizePolicy().hasHeightForWidth());
        buttonPause->setSizePolicy(sizePolicy);
        buttonPause->setMinimumSize(QSize(40, 40));
        buttonPause->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(10);
        buttonPause->setFont(font);
        buttonPause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20px;\n"
"background-color:grey;\n"
"}"));

        verticalLayout_4->addWidget(buttonPause, 0, Qt::AlignRight);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 20, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(20);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, -1, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        button_useObject = new QPushButton(Win_Fight);
        button_useObject->setObjectName(QString::fromUtf8("button_useObject"));
        sizePolicy.setHeightForWidth(button_useObject->sizePolicy().hasHeightForWidth());
        button_useObject->setSizePolicy(sizePolicy);
        button_useObject->setMinimumSize(QSize(140, 140));
        button_useObject->setMaximumSize(QSize(140, 140));
        button_useObject->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"	border-image:url(:/icons/button/buttonFight_4.png);\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/buttonFight_4_hover.png);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	border-image:url(:/icons/button/buttonFight_4_pressed.png);\n"
"}"));

        gridLayout->addWidget(button_useObject, 1, 0, 1, 1);

        button_lightAttack = new QPushButton(Win_Fight);
        button_lightAttack->setObjectName(QString::fromUtf8("button_lightAttack"));
        sizePolicy.setHeightForWidth(button_lightAttack->sizePolicy().hasHeightForWidth());
        button_lightAttack->setSizePolicy(sizePolicy);
        button_lightAttack->setMinimumSize(QSize(140, 140));
        button_lightAttack->setMaximumSize(QSize(140, 140));
        button_lightAttack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"	border-image:url(:/icons/button/buttonFight_2.png);\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/buttonFight_2_hover.png);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	border-image:url(:/icons/button/buttonFight_2_pressed.png);\n"
"}"));

        gridLayout->addWidget(button_lightAttack, 1, 2, 1, 1);

        button_heavyAttack = new QPushButton(Win_Fight);
        button_heavyAttack->setObjectName(QString::fromUtf8("button_heavyAttack"));
        sizePolicy.setHeightForWidth(button_heavyAttack->sizePolicy().hasHeightForWidth());
        button_heavyAttack->setSizePolicy(sizePolicy);
        button_heavyAttack->setMinimumSize(QSize(140, 140));
        button_heavyAttack->setMaximumSize(QSize(140, 140));
        button_heavyAttack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"	border-image:url(:/icons/button/buttonFight_1.png);\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/buttonFight_1_hover.png);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	border-image:url(:/icons/button/buttonFight_1_pressed.png);\n"
"}"));

        gridLayout->addWidget(button_heavyAttack, 0, 1, 1, 1);

        button_flee = new QPushButton(Win_Fight);
        button_flee->setObjectName(QString::fromUtf8("button_flee"));
        sizePolicy.setHeightForWidth(button_flee->sizePolicy().hasHeightForWidth());
        button_flee->setSizePolicy(sizePolicy);
        button_flee->setMinimumSize(QSize(140, 140));
        button_flee->setMaximumSize(QSize(140, 140));
        button_flee->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"	border-image:url(:/icons/button/buttonFight_3.png);\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/buttonFight_3_hover.png);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	border-image:url(:/icons/button/buttonFight_3_pressed.png);\n"
"}"));

        gridLayout->addWidget(button_flee, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 20, 20);
        data_playerStamina = new QProgressBar(Win_Fight);
        data_playerStamina->setObjectName(QString::fromUtf8("data_playerStamina"));
        data_playerStamina->setMinimumSize(QSize(10, 0));
        data_playerStamina->setMaximumSize(QSize(10, 16777215));
        data_playerStamina->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	border:2px solid #575757;\n"
"border-radius:2px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #393939, stop: 1 #393939);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 1,  stop: 1 #ffd800, stop: 0 #ffd800);\n"
"	border-radius:2px;\n"
"}"));
        data_playerStamina->setValue(24);
        data_playerStamina->setAlignment(Qt::AlignCenter);
        data_playerStamina->setTextVisible(false);
        data_playerStamina->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(data_playerStamina);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        img_player = new QLabel(Win_Fight);
        img_player->setObjectName(QString::fromUtf8("img_player"));
        sizePolicy.setHeightForWidth(img_player->sizePolicy().hasHeightForWidth());
        img_player->setSizePolicy(sizePolicy);
        img_player->setMinimumSize(QSize(150, 150));
        img_player->setMaximumSize(QSize(150, 150));
        img_player->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:75px;\n"
"}"));

        horizontalLayout_2->addWidget(img_player, 0, Qt::AlignRight|Qt::AlignVCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        layout_heroLife = new QVBoxLayout();
        layout_heroLife->setSpacing(0);
        layout_heroLife->setObjectName(QString::fromUtf8("layout_heroLife"));

        verticalLayout->addLayout(layout_heroLife);

        data_heroMana = new QProgressBar(Win_Fight);
        data_heroMana->setObjectName(QString::fromUtf8("data_heroMana"));
        data_heroMana->setMinimumSize(QSize(0, 12));
        data_heroMana->setMaximumSize(QSize(16777215, 12));
        data_heroMana->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	border:2px solid #FFFFFF;\n"
"	border-radius:2px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2:1, stop: 0 #B1CBFF, stop: 1 #B1CBFF);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 1,  stop: 1 #1F396B, stop: 0 #1F396B);\n"
"	border-radius:2px;\n"
"}"));
        data_heroMana->setValue(50);
        data_heroMana->setTextVisible(false);

        verticalLayout->addWidget(data_heroMana);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(100);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        graphicsView = new QGraphicsView(Win_Fight);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(0, 125));
        graphicsView->setMaximumSize(QSize(16777215, 125));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"	background-color:white;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar:horizontal {     \n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"	height:10px;    \n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::groove {\n"
"    background: grey;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::handle {\n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"    border-radius: 5px;\n"
"}"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout_3->addWidget(graphicsView);

        horizontalLayout_3->setStretch(0, 3);

        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_5->setStretch(0, 1);

        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(Win_Fight);

        QMetaObject::connectSlotsByName(Win_Fight);
    } // setupUi

    void retranslateUi(QWidget *Win_Fight)
    {
        Win_Fight->setWindowTitle(QCoreApplication::translate("Win_Fight", "Form", nullptr));
        img_monster->setText(QString());
        image_fight->setText(QString());
        buttonPause->setText(QCoreApplication::translate("Win_Fight", "||", nullptr));
        button_useObject->setText(QString());
        button_lightAttack->setText(QString());
        button_heavyAttack->setText(QString());
        button_flee->setText(QString());
        img_player->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Win_Fight: public Ui_Win_Fight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_FIGHT_H
