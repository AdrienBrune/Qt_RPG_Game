/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_18;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName(QString::fromUtf8("HelpDialog"));
        HelpDialog->resize(1500, 1116);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpDialog->sizePolicy().hasHeightForWidth());
        HelpDialog->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(HelpDialog);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(10, 5, 10, 5);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(50);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, -1, -1, 0);
        scrollArea = new QScrollArea(HelpDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 1000));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1459, 1058));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(20);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(300, 220));
        label->setMaximumSize(QSize(300, 200));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/MapItems/merchant_house.png);\n"
"	border:5px solid #3c3c3c;\n"
"	border-radius:4px;\n"
"}"));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(17);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(150, 150));
        label_12->setMaximumSize(QSize(150, 150));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/monsters/wolf/wolf_logo.png);\n"
"	border:5px solid #3c3c3c;\n"
"	border-radius:4px;\n"
"}"));

        horizontalLayout_4->addWidget(label_12);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_11);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_10);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(300, 200));
        label_13->setMaximumSize(QSize(300, 200));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/graphicItems/fight_interface.png);\n"
"	border:5px solid #3c3c3c;\n"
"	border-radius:4px;\n"
"}"));

        horizontalLayout_5->addWidget(label_13);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_14);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_16);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setMinimumSize(QSize(200, 200));
        label_17->setMaximumSize(QSize(200, 200));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/graphicItems/searching.png);\n"
"	border:5px solid #3c3c3c;\n"
"	border-radius:4px;\n"
"}"));

        horizontalLayout_6->addWidget(label_17);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#000000;\n"
"}"));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_9->addWidget(label_18);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#1c1c1c;\n"
"}"));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_9->addWidget(label_19);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);


        horizontalLayout_6->addLayout(verticalLayout_9);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_10->addLayout(verticalLayout_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_11->addWidget(scrollArea);


        verticalLayout_8->addLayout(verticalLayout_11);


        retranslateUi(HelpDialog);

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("HelpDialog", "Village", nullptr));
        label_3->setText(QCoreApplication::translate("HelpDialog", "Dans le village vous pourrez trouver diff\303\251rents types de batiments :\n"
"Le forgeron - Vous pourrez y crafter des \303\251quipements puissants\n"
"Le marchant - Vous pourrez y trouver des objects interressants \303\240 acheter ou bien revendez les votres\n"
"L'alchimiste - Un alchimiste concocte des potions pour vous en continu, elle ne seront n\303\251anmoins pas gratuites\n"
"Votre maison - Vous disposez d'une maison o\303\271 vous pourrez passer les nuits ainsi qu'un coffre pour stocker vos objets\n"
"  ->  Sachez que les alentours changent apr\303\250s chaque nuit", nullptr));
        label_5->setText(QCoreApplication::translate("HelpDialog", "\303\211v\303\252nements", nullptr));
        label_4->setText(QCoreApplication::translate("HelpDialog", "     Lors de vos excursion dans la carte, vous pourrez rencontrer des \303\251v\303\252nements, \303\240 vous d'\303\252tre attentif et de poss\303\251der les bons outils", nullptr));
        label_6->setText(QCoreApplication::translate("HelpDialog", "Interaction avec l'environnement", nullptr));
        label_7->setText(QCoreApplication::translate("HelpDialog", "     Vous avez la possibilit\303\251 de d\303\251placer, fouiller certains objets, tentez votre chance", nullptr));
        label_12->setText(QString());
        label_11->setText(QCoreApplication::translate("HelpDialog", "Monstres", nullptr));
        label_10->setText(QCoreApplication::translate("HelpDialog", "Des monstres sont pr\303\251sent dans l'environnement\n"
"Ne foncez pas t\303\252te baiss\303\251e\n"
"Vous pouvez prendre votre temps et obtenir des informations en cliquant sur eux car tous ne poss\303\250dent pas la m\303\252me dangerosit\303\251", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("HelpDialog", "Combat", nullptr));
        label_15->setText(QCoreApplication::translate("HelpDialog", "Les combats proposent diff\303\251rentes actions \303\240 entreprendre pour le h\303\251ro :\n"
"  -  Une attaque lourde qui d\303\251pense beaucoup d'endurance\n"
"  -  Une attaque l\303\251g\303\250re qui d\303\251pense moins d'endurance et qui fera moins de d\303\251gats\n"
"  -  La possibilit\303\251 de consommer des consommables pendant un combat\n"
"  -  La possibilit\303\251 de fuir", nullptr));
        label_16->setText(QCoreApplication::translate("HelpDialog", "Pour r\303\251aliser une action le h\303\251ros doit poss\303\251der suffisement d'endurance - Le co\303\273t en endurance est indiqu\303\251 \303\240 cot\303\251 de l'action\n"
"La barre d'endurance se recharge en continu et sa vitesse de r\303\251g\303\251n\303\251ration d\303\251pend de la vitesse d'attaque de l'arme \303\251quip\303\251e", nullptr));
        label_17->setText(QString());
        label_18->setText(QCoreApplication::translate("HelpDialog", "Fouille", nullptr));
        label_19->setText(QCoreApplication::translate("HelpDialog", "La seule action disponible pour r\303\251aliser toutes les actions est la \"fouille\"\n"
"Pour r\303\251aliser une fouille il suffit de rester appuy\303\251 sur la touche 'F'", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
