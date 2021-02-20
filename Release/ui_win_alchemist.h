/********************************************************************************
** Form generated from reading UI file 'win_alchemist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_ALCHEMIST_H
#define UI_WIN_ALCHEMIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_Alchemist
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titreCoins;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *image_coin;
    QSpinBox *data_coin;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *image_coinTrading;
    QSpinBox *data_coin_virtual;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layout_displayer;
    QLabel *data_info;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *layout_item_trader;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *layout_potion_selection;
    QSpacerItem *verticalSpacer_4;
    QPushButton *button_validate;

    void setupUi(QWidget *Win_Alchemist)
    {
        if (Win_Alchemist->objectName().isEmpty())
            Win_Alchemist->setObjectName(QString::fromUtf8("Win_Alchemist"));
        Win_Alchemist->resize(1920, 1080);
        verticalLayout_2 = new QVBoxLayout(Win_Alchemist);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(120, 30, 230, 150);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(50);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 80, -1, 100);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, -1, -1, -1);
        titreCoins = new QLabel(Win_Alchemist);
        titreCoins->setObjectName(QString::fromUtf8("titreCoins"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titreCoins->sizePolicy().hasHeightForWidth());
        titreCoins->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(15);
        titreCoins->setFont(font);
        titreCoins->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#efef93;\n"
"}"));

        horizontalLayout_2->addWidget(titreCoins);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        image_coin = new QLabel(Win_Alchemist);
        image_coin->setObjectName(QString::fromUtf8("image_coin"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(image_coin->sizePolicy().hasHeightForWidth());
        image_coin->setSizePolicy(sizePolicy1);
        image_coin->setMinimumSize(QSize(50, 50));
        image_coin->setMaximumSize(QSize(50, 50));
        image_coin->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/coin_logo.png);\n"
"}"));

        horizontalLayout_4->addWidget(image_coin);

        data_coin = new QSpinBox(Win_Alchemist);
        data_coin->setObjectName(QString::fromUtf8("data_coin"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(data_coin->sizePolicy().hasHeightForWidth());
        data_coin->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mistral"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        data_coin->setFont(font1);
        data_coin->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	color:#efef93;\n"
"	border: no border;\n"
"	background-color:rgba(0,0,0,0);\n"
"}\n"
""));
        data_coin->setAlignment(Qt::AlignCenter);
        data_coin->setReadOnly(true);
        data_coin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_coin->setMaximum(99999);
        data_coin->setValue(324);

        horizontalLayout_4->addWidget(data_coin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        image_coinTrading = new QLabel(Win_Alchemist);
        image_coinTrading->setObjectName(QString::fromUtf8("image_coinTrading"));
        sizePolicy1.setHeightForWidth(image_coinTrading->sizePolicy().hasHeightForWidth());
        image_coinTrading->setSizePolicy(sizePolicy1);
        image_coinTrading->setMinimumSize(QSize(50, 50));
        image_coinTrading->setMaximumSize(QSize(50, 50));
        image_coinTrading->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/coinTrading_icon.png);\n"
"}"));

        horizontalLayout->addWidget(image_coinTrading);

        data_coin_virtual = new QSpinBox(Win_Alchemist);
        data_coin_virtual->setObjectName(QString::fromUtf8("data_coin_virtual"));
        sizePolicy2.setHeightForWidth(data_coin_virtual->sizePolicy().hasHeightForWidth());
        data_coin_virtual->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Mistral"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        data_coin_virtual->setFont(font2);
        data_coin_virtual->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	color:#a9aa69;\n"
"	border: no border;	\n"
"	background-color:rgba(0,0,0,0);\n"
"}\n"
""));
        data_coin_virtual->setAlignment(Qt::AlignCenter);
        data_coin_virtual->setReadOnly(true);
        data_coin_virtual->setButtonSymbols(QAbstractSpinBox::NoButtons);
        data_coin_virtual->setMinimum(-99999);
        data_coin_virtual->setMaximum(99999);
        data_coin_virtual->setValue(324);

        horizontalLayout->addWidget(data_coin_virtual);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        layout_displayer = new QVBoxLayout();
        layout_displayer->setSpacing(0);
        layout_displayer->setObjectName(QString::fromUtf8("layout_displayer"));
        layout_displayer->setContentsMargins(0, -1, -1, 0);

        verticalLayout_5->addLayout(layout_displayer);

        data_info = new QLabel(Win_Alchemist);
        data_info->setObjectName(QString::fromUtf8("data_info"));
        data_info->setEnabled(true);
        sizePolicy1.setHeightForWidth(data_info->sizePolicy().hasHeightForWidth());
        data_info->setSizePolicy(sizePolicy1);
        data_info->setMinimumSize(QSize(300, 200));
        data_info->setMaximumSize(QSize(300, 200));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Pristina"));
        font3.setPointSize(12);
        data_info->setFont(font3);

        verticalLayout_5->addWidget(data_info, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(40);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 120, -1, -1);
        layout_item_trader = new QVBoxLayout();
        layout_item_trader->setObjectName(QString::fromUtf8("layout_item_trader"));

        verticalLayout_7->addLayout(layout_item_trader);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        layout_potion_selection = new QVBoxLayout();
        layout_potion_selection->setObjectName(QString::fromUtf8("layout_potion_selection"));

        verticalLayout_3->addLayout(layout_potion_selection);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_5->addLayout(verticalLayout_3);

        button_validate = new QPushButton(Win_Alchemist);
        button_validate->setObjectName(QString::fromUtf8("button_validate"));
        sizePolicy1.setHeightForWidth(button_validate->sizePolicy().hasHeightForWidth());
        button_validate->setSizePolicy(sizePolicy1);
        button_validate->setMinimumSize(QSize(200, 200));
        button_validate->setMaximumSize(QSize(200, 200));
        button_validate->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(button_validate, 0, Qt::AlignRight|Qt::AlignBottom);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalLayout_7->setStretch(0, 1);

        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(Win_Alchemist);

        QMetaObject::connectSlotsByName(Win_Alchemist);
    } // setupUi

    void retranslateUi(QWidget *Win_Alchemist)
    {
        Win_Alchemist->setWindowTitle(QCoreApplication::translate("Win_Alchemist", "Form", nullptr));
        titreCoins->setText(QCoreApplication::translate("Win_Alchemist", "Gestion des pi\303\250ces", nullptr));
        image_coin->setText(QString());
        image_coinTrading->setText(QString());
        data_info->setText(QString());
        button_validate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Win_Alchemist: public Ui_Win_Alchemist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_ALCHEMIST_H
