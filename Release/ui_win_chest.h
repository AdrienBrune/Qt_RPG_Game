/********************************************************************************
** Form generated from reading UI file 'win_chest.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_CHEST_H
#define UI_WIN_CHEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win_chest
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *layout_itemTrader;

    void setupUi(QWidget *Win_chest)
    {
        if (Win_chest->objectName().isEmpty())
            Win_chest->setObjectName(QString::fromUtf8("Win_chest"));
        Win_chest->resize(1000, 900);
        verticalLayout_2 = new QVBoxLayout(Win_chest);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layout_itemTrader = new QVBoxLayout();
        layout_itemTrader->setSpacing(0);
        layout_itemTrader->setObjectName(QString::fromUtf8("layout_itemTrader"));

        verticalLayout_2->addLayout(layout_itemTrader);


        retranslateUi(Win_chest);

        QMetaObject::connectSlotsByName(Win_chest);
    } // setupUi

    void retranslateUi(QWidget *Win_chest)
    {
        Win_chest->setWindowTitle(QCoreApplication::translate("Win_chest", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Win_chest: public Ui_Win_chest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_CHEST_H
