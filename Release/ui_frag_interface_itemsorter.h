/********************************************************************************
** Form generated from reading UI file 'frag_interface_itemsorter.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_INTERFACE_ITEMSORTER_H
#define UI_FRAG_INTERFACE_ITEMSORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_interface_itemSorter
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Frag_interface_itemSorter)
    {
        if (Frag_interface_itemSorter->objectName().isEmpty())
            Frag_interface_itemSorter->setObjectName(QString::fromUtf8("Frag_interface_itemSorter"));
        Frag_interface_itemSorter->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frag_interface_itemSorter->sizePolicy().hasHeightForWidth());
        Frag_interface_itemSorter->setSizePolicy(sizePolicy);
        Frag_interface_itemSorter->setMinimumSize(QSize(1000, 700));
        Frag_interface_itemSorter->setMaximumSize(QSize(1000, 700));
        verticalLayout = new QVBoxLayout(Frag_interface_itemSorter);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(Frag_interface_itemSorter);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(1000, 0));
        graphicsView->setMaximumSize(QSize(1000, 10000));
        graphicsView->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {         \n"
"        border: 1px solid #999999;\n"
"        background:white;\n"
"        width:10px;    \n"
"        margin: 0px 0px 0px 0px;\n"
"    }\n"
"    QScrollBar::handle:vertical {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));\n"
"        min-height: 0px;\n"
"    }\n"
"    QScrollBar::add-line:vertical {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"        height: 0px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    QScrollBar::sub-line:vertical {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"    stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"        height: 0 px;\n"
"        subcontrol-position: top;\n"
"        subcontrol-origin: margin;\n"
"    "
                        "}\n"
"  "));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        graphicsView->setSceneRect(QRectF(0, 0, 1000, 120));
        graphicsView->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(graphicsView);


        retranslateUi(Frag_interface_itemSorter);

        QMetaObject::connectSlotsByName(Frag_interface_itemSorter);
    } // setupUi

    void retranslateUi(QWidget *Frag_interface_itemSorter)
    {
        Frag_interface_itemSorter->setWindowTitle(QCoreApplication::translate("Frag_interface_itemSorter", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frag_interface_itemSorter: public Ui_Frag_interface_itemSorter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_INTERFACE_ITEMSORTER_H
