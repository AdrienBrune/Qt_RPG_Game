/********************************************************************************
** Form generated from reading UI file 'ctrwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRWINDOW_H
#define UI_CTRWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTRWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *buttonHelp;
    QPushButton *Skills;
    QPushButton *Gear;
    QPushButton *Inventory;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QMainWindow *CTRWindow)
    {
        if (CTRWindow->objectName().isEmpty())
            CTRWindow->setObjectName(QString::fromUtf8("CTRWindow"));
        CTRWindow->resize(1920, 1080);
        centralWidget = new QWidget(CTRWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 100, -1, -1);
        buttonHelp = new QPushButton(centralWidget);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        QFont font;
        font.setFamily(QString::fromUtf8("Mistral"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        buttonHelp->setFont(font);
        buttonHelp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color:#3c3c3c;\n"
"	background-color:#c6c6c6;\n"
"	border:2px solid #3c3c3c;\n"
"	padding:2px;\n"
"	border-radius:4px;\n"
"}"));

        verticalLayout_4->addWidget(buttonHelp);

        Skills = new QPushButton(centralWidget);
        Skills->setObjectName(QString::fromUtf8("Skills"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Skills->sizePolicy().hasHeightForWidth());
        Skills->setSizePolicy(sizePolicy);
        Skills->setMinimumSize(QSize(100, 100));
        Skills->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image:url(:/icons/button/button_skill.png);\n"
"}"));

        verticalLayout_4->addWidget(Skills, 0, Qt::AlignHCenter);

        Gear = new QPushButton(centralWidget);
        Gear->setObjectName(QString::fromUtf8("Gear"));
        sizePolicy.setHeightForWidth(Gear->sizePolicy().hasHeightForWidth());
        Gear->setSizePolicy(sizePolicy);
        Gear->setMinimumSize(QSize(100, 100));
        Gear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image:url(:/icons/button/button_armor.png);\n"
"}\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/button_armor_h.png);\n"
"}"));

        verticalLayout_4->addWidget(Gear, 0, Qt::AlignHCenter);

        Inventory = new QPushButton(centralWidget);
        Inventory->setObjectName(QString::fromUtf8("Inventory"));
        sizePolicy.setHeightForWidth(Inventory->sizePolicy().hasHeightForWidth());
        Inventory->setSizePolicy(sizePolicy);
        Inventory->setMinimumSize(QSize(100, 100));
        Inventory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image:url(:/icons/button/button_bag.png);\n"
"}\n"
"QPushButton::hover{\n"
"	border-image:url(:/icons/button/button_bag_h.png);\n"
"}"));

        verticalLayout_4->addWidget(Inventory, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  padding:2px;\n"
"  border-image:url(:/graphicItems/background_itemInfo);\n"
"  color:white;\n"
"  border:1px solid #404040;\n"
"}\n"
" \n"
"\n"
"QPushButton::hover{\n"
"  background-color:#252525;\n"
"}"));

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        CTRWindow->setCentralWidget(centralWidget);

        retranslateUi(CTRWindow);

        QMetaObject::connectSlotsByName(CTRWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CTRWindow)
    {
        CTRWindow->setWindowTitle(QString());
        buttonHelp->setText(QCoreApplication::translate("CTRWindow", "AIDE", nullptr));
        Skills->setText(QString());
        Gear->setText(QString());
        Inventory->setText(QString());
        pushButton->setText(QCoreApplication::translate("CTRWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTRWindow: public Ui_CTRWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRWINDOW_H
