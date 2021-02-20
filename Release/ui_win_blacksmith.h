/********************************************************************************
** Form generated from reading UI file 'win_blacksmith.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_BLACKSMITH_H
#define UI_WIN_BLACKSMITH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_Blacksmith
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *logo_coin;
    QSpinBox *data_coin;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *layout_item_trader;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layout_displayer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *layout_loots;
    QPushButton *button_validate;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *Win_Blacksmith)
    {
        if (Win_Blacksmith->objectName().isEmpty())
            Win_Blacksmith->setObjectName(QString::fromUtf8("Win_Blacksmith"));
        Win_Blacksmith->resize(1920, 1080);
        verticalLayout = new QVBoxLayout(Win_Blacksmith);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, 50, 100, 100);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, -1, 70, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(Win_Blacksmith);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#efef93;\n"
"}"));

        horizontalLayout_2->addWidget(label);

        logo_coin = new QLabel(Win_Blacksmith);
        logo_coin->setObjectName(QString::fromUtf8("logo_coin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo_coin->sizePolicy().hasHeightForWidth());
        logo_coin->setSizePolicy(sizePolicy);
        logo_coin->setMinimumSize(QSize(50, 50));
        logo_coin->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Calligraphy"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        logo_coin->setFont(font1);
        logo_coin->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/icons/coin_logo.png);\n"
"}"));

        horizontalLayout_2->addWidget(logo_coin);

        data_coin = new QSpinBox(Win_Blacksmith);
        data_coin->setObjectName(QString::fromUtf8("data_coin"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_coin->sizePolicy().hasHeightForWidth());
        data_coin->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Mistral"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        data_coin->setFont(font2);
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

        horizontalLayout_2->addWidget(data_coin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(4, 5);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        layout_item_trader = new QVBoxLayout();
        layout_item_trader->setObjectName(QString::fromUtf8("layout_item_trader"));

        verticalLayout_2->addLayout(layout_item_trader);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 30, -1, 30);
        layout_displayer = new QVBoxLayout();
        layout_displayer->setSpacing(0);
        layout_displayer->setObjectName(QString::fromUtf8("layout_displayer"));
        layout_displayer->setContentsMargins(-1, -1, -1, 50);

        verticalLayout_3->addLayout(layout_displayer);

        scrollArea = new QScrollArea(Win_Blacksmith);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color:rgba(0,0,0,0);\n"
"	border: no border;\n"
"	border-top : 3px solid #6c6c6c;\n"
"	border-bottom : 3px solid #6c6c6c;\n"
"}\n"
"\n"
"QScrollArea QScrollBar:vertical {     \n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"	height:10px;    \n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::groove {\n"
"    background: grey;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::handle {\n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"    border-radius: 5px;\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 471, 589));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QScrollAreaWidgetContents{\n"
"	background-color:rgba(0,0,0,0);\n"
"}\n"
"\n"
"\n"
"QScrollAreaWidgetContents QScrollBar:vertical {     \n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"	height:10px;    \n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollAreaWidgetContents QScrollBar::groove {\n"
"    background: grey;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollAreaWidgetContents QScrollBar::handle {\n"
"    border: 1px solid #FFFFFF;\n"
"    background:#494949;\n"
"    border-radius: 5px;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        layout_loots = new QVBoxLayout();
        layout_loots->setSpacing(20);
        layout_loots->setObjectName(QString::fromUtf8("layout_loots"));

        verticalLayout_5->addLayout(layout_loots);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        button_validate = new QPushButton(Win_Blacksmith);
        button_validate->setObjectName(QString::fromUtf8("button_validate"));
        sizePolicy.setHeightForWidth(button_validate->sizePolicy().hasHeightForWidth());
        button_validate->setSizePolicy(sizePolicy);
        button_validate->setMinimumSize(QSize(200, 200));
        button_validate->setMaximumSize(QSize(200, 200));
        button_validate->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(button_validate, 0, Qt::AlignRight);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 150, -1, -1);
        graphicsView = new QGraphicsView(Win_Blacksmith);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy2);
        graphicsView->setMinimumSize(QSize(120, 0));
        graphicsView->setMaximumSize(QSize(120, 330));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_6->addWidget(graphicsView);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_6);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);


        retranslateUi(Win_Blacksmith);

        QMetaObject::connectSlotsByName(Win_Blacksmith);
    } // setupUi

    void retranslateUi(QWidget *Win_Blacksmith)
    {
        Win_Blacksmith->setWindowTitle(QCoreApplication::translate("Win_Blacksmith", "Form", nullptr));
        label->setText(QCoreApplication::translate("Win_Blacksmith", "Pi\303\250ces  ", nullptr));
        logo_coin->setText(QString());
        button_validate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Win_Blacksmith: public Ui_Win_Blacksmith {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_BLACKSMITH_H
