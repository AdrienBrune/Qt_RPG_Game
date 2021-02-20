/********************************************************************************
** Form generated from reading UI file 'win_gear.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_GEAR_H
#define UI_WIN_GEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_gear
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonExit;
    QVBoxLayout *layoutV;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *item_info;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layout_inventoryEquipment;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layout_stats_1;
    QVBoxLayout *layout_stats_2;
    QVBoxLayout *layout_stats_3;

    void setupUi(QWidget *Win_gear)
    {
        if (Win_gear->objectName().isEmpty())
            Win_gear->setObjectName(QString::fromUtf8("Win_gear"));
        Win_gear->resize(1100, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Win_gear->sizePolicy().hasHeightForWidth());
        Win_gear->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Win_gear);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 100, 0);
        buttonExit = new QPushButton(Win_gear);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy1);
        buttonExit->setMinimumSize(QSize(60, 60));
        buttonExit->setMaximumSize(QSize(60, 60));
        buttonExit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#ECECEC;\n"
"	border-radius:30px;\n"
"	border-image:url(:/icons/button/arrow_right.png);\n"
"}"));

        horizontalLayout_2->addWidget(buttonExit, 0, Qt::AlignLeft);

        layoutV = new QVBoxLayout();
        layoutV->setSpacing(0);
        layoutV->setObjectName(QString::fromUtf8("layoutV"));
        layoutV->setContentsMargins(-1, 50, -1, 50);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        item_info = new QLabel(Win_gear);
        item_info->setObjectName(QString::fromUtf8("item_info"));
        sizePolicy1.setHeightForWidth(item_info->sizePolicy().hasHeightForWidth());
        item_info->setSizePolicy(sizePolicy1);
        item_info->setMinimumSize(QSize(300, 200));
        item_info->setMaximumSize(QSize(300, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Pristina"));
        font.setPointSize(12);
        item_info->setFont(font);

        horizontalLayout_3->addWidget(item_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(2, 4);

        layoutV->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layoutV->addItem(verticalSpacer);

        layout_inventoryEquipment = new QVBoxLayout();
        layout_inventoryEquipment->setSpacing(0);
        layout_inventoryEquipment->setObjectName(QString::fromUtf8("layout_inventoryEquipment"));
        layout_inventoryEquipment->setContentsMargins(-1, 0, -1, -1);

        layoutV->addLayout(layout_inventoryEquipment);

        scrollArea = new QScrollArea(Win_gear);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 935, 722));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(50, 20, 50, 20);
        layout_stats_1 = new QVBoxLayout();
        layout_stats_1->setSpacing(5);
        layout_stats_1->setObjectName(QString::fromUtf8("layout_stats_1"));
        layout_stats_1->setContentsMargins(-1, -1, -1, 0);

        horizontalLayout->addLayout(layout_stats_1);

        layout_stats_2 = new QVBoxLayout();
        layout_stats_2->setSpacing(5);
        layout_stats_2->setObjectName(QString::fromUtf8("layout_stats_2"));
        layout_stats_2->setContentsMargins(-1, -1, -1, 0);

        horizontalLayout->addLayout(layout_stats_2);

        layout_stats_3 = new QVBoxLayout();
        layout_stats_3->setSpacing(5);
        layout_stats_3->setObjectName(QString::fromUtf8("layout_stats_3"));
        layout_stats_3->setContentsMargins(-1, -1, -1, 0);

        horizontalLayout->addLayout(layout_stats_3);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        layoutV->addWidget(scrollArea);


        horizontalLayout_2->addLayout(layoutV);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Win_gear);

        QMetaObject::connectSlotsByName(Win_gear);
    } // setupUi

    void retranslateUi(QWidget *Win_gear)
    {
        Win_gear->setWindowTitle(QCoreApplication::translate("Win_gear", "Form", nullptr));
        buttonExit->setText(QString());
        item_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Win_gear: public Ui_Win_gear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_GEAR_H
