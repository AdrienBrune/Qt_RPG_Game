/********************************************************************************
** Form generated from reading UI file 'win_inventory.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_INVENTORY_H
#define UI_WIN_INVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_inventory
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonExit;
    QVBoxLayout *layout;
    QVBoxLayout *layoutItems;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *item_info;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layoutV;

    void setupUi(QWidget *Win_inventory)
    {
        if (Win_inventory->objectName().isEmpty())
            Win_inventory->setObjectName(QString::fromUtf8("Win_inventory"));
        Win_inventory->resize(1100, 1080);
        Win_inventory->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Win_inventory);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 100, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 0, -1);
        buttonExit = new QPushButton(Win_inventory);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy);
        buttonExit->setMinimumSize(QSize(60, 60));
        buttonExit->setMaximumSize(QSize(60, 60));
        buttonExit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#ECECEC;\n"
"	border-radius:30px;\n"
"	border-image:url(:/icons/button/arrow_right.png);\n"
"}"));

        horizontalLayout->addWidget(buttonExit, 0, Qt::AlignLeft);

        layout = new QVBoxLayout();
        layout->setSpacing(0);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(5, 0, 0, 80);
        layoutItems = new QVBoxLayout();
        layoutItems->setSpacing(0);
        layoutItems->setObjectName(QString::fromUtf8("layoutItems"));
        layoutItems->setContentsMargins(-1, 50, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        item_info = new QLabel(Win_inventory);
        item_info->setObjectName(QString::fromUtf8("item_info"));
        sizePolicy.setHeightForWidth(item_info->sizePolicy().hasHeightForWidth());
        item_info->setSizePolicy(sizePolicy);
        item_info->setMinimumSize(QSize(300, 200));
        item_info->setMaximumSize(QSize(300, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Pristina"));
        font.setPointSize(12);
        item_info->setFont(font);
        item_info->setStyleSheet(QString::fromUtf8(""));
        item_info->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(item_info);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(2, 4);

        layoutItems->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layoutItems->addItem(verticalSpacer_2);


        layout->addLayout(layoutItems);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout->addItem(verticalSpacer);

        layoutV = new QVBoxLayout();
        layoutV->setSpacing(0);
        layoutV->setObjectName(QString::fromUtf8("layoutV"));
        layoutV->setContentsMargins(-1, -1, 50, -1);

        layout->addLayout(layoutV);


        horizontalLayout->addLayout(layout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Win_inventory);

        QMetaObject::connectSlotsByName(Win_inventory);
    } // setupUi

    void retranslateUi(QWidget *Win_inventory)
    {
        Win_inventory->setWindowTitle(QCoreApplication::translate("Win_inventory", "Form", nullptr));
        buttonExit->setText(QString());
        item_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Win_inventory: public Ui_Win_inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_INVENTORY_H
