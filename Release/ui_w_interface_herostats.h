/********************************************************************************
** Form generated from reading UI file 'w_interface_herostats.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_INTERFACE_HEROSTATS_H
#define UI_W_INTERFACE_HEROSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_W_interface_herostats
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *data_role;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *data_name;
    QSpacerItem *horizontalSpacer_8;
    QProgressBar *data_life;
    QProgressBar *data_mana;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelDamage;
    QSpinBox *data_damage;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelDefense;
    QSpinBox *data_armor;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelPayload;
    QSpinBox *data_payload;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *img_exp;
    QLabel *label;
    QSpinBox *data_exp_number;
    QSpacerItem *horizontalSpacer;
    QProgressBar *data_exp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *img_coin;
    QSpinBox *data_coin;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *data_skill1;
    QLabel *data_skill2;
    QLabel *data_skill3;

    void setupUi(QWidget *W_interface_herostats)
    {
        if (W_interface_herostats->objectName().isEmpty())
            W_interface_herostats->setObjectName(QString::fromUtf8("W_interface_herostats"));
        W_interface_herostats->resize(431, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(W_interface_herostats->sizePolicy().hasHeightForWidth());
        W_interface_herostats->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(W_interface_herostats);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        data_role = new QLabel(W_interface_herostats);
        data_role->setObjectName(QString::fromUtf8("data_role"));
        sizePolicy.setHeightForWidth(data_role->sizePolicy().hasHeightForWidth());
        data_role->setSizePolicy(sizePolicy);
        data_role->setMinimumSize(QSize(60, 60));
        data_role->setMaximumSize(QSize(60, 60));
        data_role->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(data_role, 0, Qt::AlignLeft);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, 0);
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        data_name = new QLabel(W_interface_herostats);
        data_name->setObjectName(QString::fromUtf8("data_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_name->sizePolicy().hasHeightForWidth());
        data_name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        data_name->setFont(font);

        horizontalLayout_6->addWidget(data_name);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_6);

        data_life = new QProgressBar(W_interface_herostats);
        data_life->setObjectName(QString::fromUtf8("data_life"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(data_life->sizePolicy().hasHeightForWidth());
        data_life->setSizePolicy(sizePolicy2);
        data_life->setMinimumSize(QSize(0, 20));
        data_life->setMaximumSize(QSize(5000, 20));
        data_life->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border-top:1px solid #D8D8D8;\n"
"border-left:1px solid #D8D8D8;\n"
"border-right:1px solid #D8D8D8;\n"
"	border-top-left-radius:20px;	\n"
"	border-top-right-radius:10px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 				1, stop: 0 #D7FFDE, stop: 1 #D7FFDE);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 1,  stop: 0.5 #218031, stop: 0 #194621);\n"
"\n"
"	border-top-right-radius:10px;\n"
"	border-top-left-radius:18px;\n"
"\n"
"}"));
        data_life->setValue(100);
        data_life->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_life->setTextVisible(false);

        verticalLayout->addWidget(data_life, 0, Qt::AlignBottom);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout);

        data_mana = new QProgressBar(W_interface_herostats);
        data_mana->setObjectName(QString::fromUtf8("data_mana"));
        sizePolicy2.setHeightForWidth(data_mana->sizePolicy().hasHeightForWidth());
        data_mana->setSizePolicy(sizePolicy2);
        data_mana->setMinimumSize(QSize(0, 10));
        data_mana->setMaximumSize(QSize(5000, 10));
        data_mana->setSizeIncrement(QSize(120, 10));
        data_mana->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	border-bottom-right-radius:10px;\n"
"border:1px solid #D8D8D8;\n"
"\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 				1, stop: 0 #B1CBFF, stop: 1 #B1CBFF);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 1,  stop: 1 #6694EC, stop: 0 #1F396B);\n"
"\n"
"	border-bottom-right-radius:8px;\n"
"}"));
        data_mana->setValue(80);
        data_mana->setTextVisible(false);

        verticalLayout_5->addWidget(data_mana);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        labelDamage = new QLabel(W_interface_herostats);
        labelDamage->setObjectName(QString::fromUtf8("labelDamage"));
        sizePolicy.setHeightForWidth(labelDamage->sizePolicy().hasHeightForWidth());
        labelDamage->setSizePolicy(sizePolicy);
        labelDamage->setMinimumSize(QSize(30, 30));
        labelDamage->setMaximumSize(QSize(30, 30));
        labelDamage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/sword_logo_2.png);\n"
"}"));

        horizontalLayout_5->addWidget(labelDamage);

        data_damage = new QSpinBox(W_interface_herostats);
        data_damage->setObjectName(QString::fromUtf8("data_damage"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(data_damage->sizePolicy().hasHeightForWidth());
        data_damage->setSizePolicy(sizePolicy3);
        data_damage->setMaximumSize(QSize(16666666, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern No. 20"));
        font1.setPointSize(10);
        data_damage->setFont(font1);
        data_damage->setLayoutDirection(Qt::LeftToRight);
        data_damage->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border:1px solid #3C3C3C;\n"
"	border-top-right-radius:3px;\n"
"	border-bottom-right-radius:3px;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"                                      stop: 0 #CECECE, stop: 0.5 #F3F3F3);\n"
"	color:#3C3C3C;\n"
"}\n"
"QSpinBox::up-button {\n"
"    width: 0px; \n"
"} \n"
"QSpinBox::up-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"    width: 0px;\n"
"}\n"
"QSpinBox::down-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"\n"
""));
        data_damage->setInputMethodHints(Qt::ImhNone);
        data_damage->setAlignment(Qt::AlignCenter);
        data_damage->setReadOnly(true);
        data_damage->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_damage->setKeyboardTracking(false);
        data_damage->setMaximum(999);
        data_damage->setValue(56);

        horizontalLayout_5->addWidget(data_damage);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        labelDefense = new QLabel(W_interface_herostats);
        labelDefense->setObjectName(QString::fromUtf8("labelDefense"));
        sizePolicy.setHeightForWidth(labelDefense->sizePolicy().hasHeightForWidth());
        labelDefense->setSizePolicy(sizePolicy);
        labelDefense->setMinimumSize(QSize(30, 30));
        labelDefense->setMaximumSize(QSize(30, 30));
        labelDefense->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/shield_logo.png);\n"
"}"));

        horizontalLayout_5->addWidget(labelDefense);

        data_armor = new QSpinBox(W_interface_herostats);
        data_armor->setObjectName(QString::fromUtf8("data_armor"));
        sizePolicy3.setHeightForWidth(data_armor->sizePolicy().hasHeightForWidth());
        data_armor->setSizePolicy(sizePolicy3);
        data_armor->setFont(font1);
        data_armor->setLayoutDirection(Qt::LeftToRight);
        data_armor->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border:1px solid #3C3C3C;\n"
"	border-top-right-radius:3px;\n"
"	border-bottom-right-radius:3px;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"                                      stop: 0 #CECECE, stop: 0.5 #F3F3F3);\n"
"	color:#3C3C3C;\n"
"}\n"
"QSpinBox::up-button {\n"
"    width: 0px; \n"
"} \n"
"QSpinBox::up-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"    width: 0px;\n"
"}\n"
"QSpinBox::down-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        data_armor->setInputMethodHints(Qt::ImhNone);
        data_armor->setAlignment(Qt::AlignCenter);
        data_armor->setReadOnly(true);
        data_armor->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_armor->setKeyboardTracking(false);
        data_armor->setMaximum(999);
        data_armor->setValue(210);

        horizontalLayout_5->addWidget(data_armor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        labelPayload = new QLabel(W_interface_herostats);
        labelPayload->setObjectName(QString::fromUtf8("labelPayload"));
        sizePolicy.setHeightForWidth(labelPayload->sizePolicy().hasHeightForWidth());
        labelPayload->setSizePolicy(sizePolicy);
        labelPayload->setMinimumSize(QSize(30, 30));
        labelPayload->setMaximumSize(QSize(30, 30));
        labelPayload->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/payload_logo.png);\n"
"}"));

        horizontalLayout_5->addWidget(labelPayload);

        data_payload = new QSpinBox(W_interface_herostats);
        data_payload->setObjectName(QString::fromUtf8("data_payload"));
        sizePolicy3.setHeightForWidth(data_payload->sizePolicy().hasHeightForWidth());
        data_payload->setSizePolicy(sizePolicy3);
        data_payload->setFont(font1);
        data_payload->setLayoutDirection(Qt::LeftToRight);
        data_payload->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border:1px solid #3C3C3C;\n"
"	border-top-right-radius:3px;\n"
"	border-bottom-right-radius:3px;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"                                      stop: 0 #CECECE, stop: 0.5 #F3F3F3);\n"
"	color:#3C3C3C;\n"
"}\n"
"QSpinBox::up-button {\n"
"    width: 0px; \n"
"} \n"
"QSpinBox::up-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"    width: 0px;\n"
"}\n"
"QSpinBox::down-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        data_payload->setInputMethodHints(Qt::ImhNone);
        data_payload->setAlignment(Qt::AlignCenter);
        data_payload->setReadOnly(true);
        data_payload->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_payload->setKeyboardTracking(false);
        data_payload->setMaximum(999);
        data_payload->setValue(56);

        horizontalLayout_5->addWidget(data_payload);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        img_exp = new QLabel(W_interface_herostats);
        img_exp->setObjectName(QString::fromUtf8("img_exp"));
        sizePolicy.setHeightForWidth(img_exp->sizePolicy().hasHeightForWidth());
        img_exp->setSizePolicy(sizePolicy);
        img_exp->setMinimumSize(QSize(40, 40));
        img_exp->setMaximumSize(QSize(40, 40));
        img_exp->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:#696969;\n"
"	background-color: qlineargradient(x1: 1, y1: 1, x2: 0, y2: 0,\n"
"                                      stop: 0 #696969, stop: 1 #3A3A3A);\n"
"	border : 2px solid black;\n"
"	border-radius : 5px;\n"
"	border-image:url(:/icons/exp_logo.png);\n"
"}"));

        horizontalLayout_2->addWidget(img_exp, 0, Qt::AlignLeft|Qt::AlignBottom);

        label = new QLabel(W_interface_herostats);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));

        horizontalLayout_2->addWidget(label, 0, Qt::AlignLeft|Qt::AlignBottom);

        data_exp_number = new QSpinBox(W_interface_herostats);
        data_exp_number->setObjectName(QString::fromUtf8("data_exp_number"));
        sizePolicy3.setHeightForWidth(data_exp_number->sizePolicy().hasHeightForWidth());
        data_exp_number->setSizePolicy(sizePolicy3);
        data_exp_number->setMaximumSize(QSize(16777215, 15));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Myanmar Text"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        data_exp_number->setFont(font3);
        data_exp_number->setLayoutDirection(Qt::LeftToRight);
        data_exp_number->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border:no-border;\n"
"	background-color: rgba(0,0,0,0);\n"
"	color:white;\n"
"}"));
        data_exp_number->setInputMethodHints(Qt::ImhNone);
        data_exp_number->setAlignment(Qt::AlignCenter);
        data_exp_number->setReadOnly(true);
        data_exp_number->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_exp_number->setKeyboardTracking(false);
        data_exp_number->setSuffix(QString::fromUtf8(""));
        data_exp_number->setMaximum(99);
        data_exp_number->setValue(2);

        horizontalLayout_2->addWidget(data_exp_number, 0, Qt::AlignLeft|Qt::AlignBottom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        data_exp = new QProgressBar(W_interface_herostats);
        data_exp->setObjectName(QString::fromUtf8("data_exp"));
        sizePolicy2.setHeightForWidth(data_exp->sizePolicy().hasHeightForWidth());
        data_exp->setSizePolicy(sizePolicy2);
        data_exp->setMinimumSize(QSize(0, 8));
        data_exp->setMaximumSize(QSize(10000, 8));
        data_exp->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	border-top-right-radius:8px;\n"
"\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 				1, stop: 0 #FFFBE8, stop: 1 #FFFBE8);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"	background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 1,  stop: 1 #DC962A, stop: 0 #913611);\n"
"\n"
"	border-top-right-radius:8px;\n"
"}"));
        data_exp->setValue(66);
        data_exp->setAlignment(Qt::AlignCenter);
        data_exp->setTextVisible(false);
        data_exp->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(data_exp);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        img_coin = new QLabel(W_interface_herostats);
        img_coin->setObjectName(QString::fromUtf8("img_coin"));
        sizePolicy.setHeightForWidth(img_coin->sizePolicy().hasHeightForWidth());
        img_coin->setSizePolicy(sizePolicy);
        img_coin->setMinimumSize(QSize(50, 50));
        img_coin->setMaximumSize(QSize(50, 50));
        img_coin->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image : url(:/icons/coin_logo.png);\n"
"	background-color: qlineargradient(x1: 1, y1: 1, x2: 1, y2: 0,\n"
"                                      stop: 0 #696969, stop: 1 #3A3A3A);\n"
"	border-top-left-radius : 5px;\n"
"	border-bottom-left-radius : 5px;\n"
"}"));

        horizontalLayout_4->addWidget(img_coin, 0, Qt::AlignHCenter);

        data_coin = new QSpinBox(W_interface_herostats);
        data_coin->setObjectName(QString::fromUtf8("data_coin"));
        sizePolicy3.setHeightForWidth(data_coin->sizePolicy().hasHeightForWidth());
        data_coin->setSizePolicy(sizePolicy3);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Modern No. 20"));
        font4.setPointSize(18);
        data_coin->setFont(font4);
        data_coin->setLayoutDirection(Qt::LeftToRight);
        data_coin->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	height:50px;\n"
"	padding-left:10px;\n"
"	border-top-right-radius:5px;\n"
"	border-bottom-right-radius:5px;\n"
"	background-color: qlineargradient(x1: 1, y1: 1, x2: 1, y2: 0,\n"
"                                      stop: 0 #696969, stop: 1 #3A3A3A);\n"
"	color:white;\n"
"}\n"
"QSpinBox::up-button {\n"
"    width: 0px; \n"
"} \n"
"QSpinBox::up-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QSpinBox::down-button {\n"
"    width: 0px;\n"
"}\n"
"QSpinBox::down-arrow {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        data_coin->setInputMethodHints(Qt::ImhNone);
        data_coin->setAlignment(Qt::AlignCenter);
        data_coin->setReadOnly(true);
        data_coin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_coin->setKeyboardTracking(false);
        data_coin->setMaximum(99999);
        data_coin->setValue(0);

        horizontalLayout_4->addWidget(data_coin, 0, Qt::AlignHCenter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        data_skill1 = new QLabel(W_interface_herostats);
        data_skill1->setObjectName(QString::fromUtf8("data_skill1"));
        sizePolicy.setHeightForWidth(data_skill1->sizePolicy().hasHeightForWidth());
        data_skill1->setSizePolicy(sizePolicy);
        data_skill1->setMinimumSize(QSize(60, 60));
        data_skill1->setStyleSheet(QString::fromUtf8("/*\n"
"QLabel{\n"
"	border-image:url(:/graphicItems/logo_noSkill.png);\n"
"}\n"
"*/"));

        horizontalLayout_3->addWidget(data_skill1);

        data_skill2 = new QLabel(W_interface_herostats);
        data_skill2->setObjectName(QString::fromUtf8("data_skill2"));
        sizePolicy.setHeightForWidth(data_skill2->sizePolicy().hasHeightForWidth());
        data_skill2->setSizePolicy(sizePolicy);
        data_skill2->setMinimumSize(QSize(60, 60));
        data_skill2->setStyleSheet(QString::fromUtf8("/*\n"
"QLabel{\n"
"	border-image:url(:/graphicItems/logo_noSkill.png);\n"
"}\n"
"*/"));

        horizontalLayout_3->addWidget(data_skill2);

        data_skill3 = new QLabel(W_interface_herostats);
        data_skill3->setObjectName(QString::fromUtf8("data_skill3"));
        sizePolicy.setHeightForWidth(data_skill3->sizePolicy().hasHeightForWidth());
        data_skill3->setSizePolicy(sizePolicy);
        data_skill3->setMinimumSize(QSize(60, 60));
        data_skill3->setStyleSheet(QString::fromUtf8("/*\n"
"QLabel{\n"
"	border-image:url(:/graphicItems/logo_noSkill.png);\n"
"}\n"
"*/"));

        horizontalLayout_3->addWidget(data_skill3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);

        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(W_interface_herostats);

        QMetaObject::connectSlotsByName(W_interface_herostats);
    } // setupUi

    void retranslateUi(QWidget *W_interface_herostats)
    {
        W_interface_herostats->setWindowTitle(QCoreApplication::translate("W_interface_herostats", "Form", nullptr));
        data_role->setText(QString());
        data_name->setText(QString());
        labelDamage->setText(QString());
        labelDefense->setText(QString());
        labelPayload->setText(QString());
        img_exp->setText(QString());
        label->setText(QCoreApplication::translate("W_interface_herostats", "     Niveau", nullptr));
        img_coin->setText(QString());
        data_skill1->setText(QString());
        data_skill2->setText(QString());
        data_skill3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class W_interface_herostats: public Ui_W_interface_herostats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_INTERFACE_HEROSTATS_H
