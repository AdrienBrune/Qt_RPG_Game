/********************************************************************************
** Form generated from reading UI file 'frag_interface_itemtrader.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_INTERFACE_ITEMTRADER_H
#define UI_FRAG_INTERFACE_ITEMTRADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_interface_itemTrader
{
public:
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Frag_interface_itemTrader)
    {
        if (Frag_interface_itemTrader->objectName().isEmpty())
            Frag_interface_itemTrader->setObjectName(QString::fromUtf8("Frag_interface_itemTrader"));
        Frag_interface_itemTrader->resize(400, 400);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frag_interface_itemTrader->sizePolicy().hasHeightForWidth());
        Frag_interface_itemTrader->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Frag_interface_itemTrader);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 30, 0, 30);
        graphicsView = new QGraphicsView(Frag_interface_itemTrader);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(10000, 10000));

        horizontalLayout->addWidget(graphicsView);


        retranslateUi(Frag_interface_itemTrader);

        QMetaObject::connectSlotsByName(Frag_interface_itemTrader);
    } // setupUi

    void retranslateUi(QWidget *Frag_interface_itemTrader)
    {
        Frag_interface_itemTrader->setWindowTitle(QCoreApplication::translate("Frag_interface_itemTrader", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frag_interface_itemTrader: public Ui_Frag_interface_itemTrader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_INTERFACE_ITEMTRADER_H
