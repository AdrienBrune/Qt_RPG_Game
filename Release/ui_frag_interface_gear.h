/********************************************************************************
** Form generated from reading UI file 'frag_interface_gear.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_INTERFACE_GEAR_H
#define UI_FRAG_INTERFACE_GEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_interface_gear
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Frag_interface_gear)
    {
        if (Frag_interface_gear->objectName().isEmpty())
            Frag_interface_gear->setObjectName(QString::fromUtf8("Frag_interface_gear"));
        Frag_interface_gear->resize(855, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frag_interface_gear->sizePolicy().hasHeightForWidth());
        Frag_interface_gear->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Frag_interface_gear);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(Frag_interface_gear);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(10000, 10000));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(graphicsView);


        retranslateUi(Frag_interface_gear);

        QMetaObject::connectSlotsByName(Frag_interface_gear);
    } // setupUi

    void retranslateUi(QWidget *Frag_interface_gear)
    {
        Frag_interface_gear->setWindowTitle(QCoreApplication::translate("Frag_interface_gear", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frag_interface_gear: public Ui_Frag_interface_gear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_INTERFACE_GEAR_H
