/********************************************************************************
** Form generated from reading UI file 'frag_interface_potionpreferencies.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_INTERFACE_POTIONPREFERENCIES_H
#define UI_FRAG_INTERFACE_POTIONPREFERENCIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_Interface_PotionPreferencies
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *mainLayout;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Frag_Interface_PotionPreferencies)
    {
        if (Frag_Interface_PotionPreferencies->objectName().isEmpty())
            Frag_Interface_PotionPreferencies->setObjectName(QString::fromUtf8("Frag_Interface_PotionPreferencies"));
        Frag_Interface_PotionPreferencies->resize(820, 306);
        verticalLayout = new QVBoxLayout(Frag_Interface_PotionPreferencies);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Frag_Interface_PotionPreferencies);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Small"));
        font.setPointSize(13);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(20);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(-1, 15, -1, -1);

        horizontalLayout_2->addLayout(mainLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(Frag_Interface_PotionPreferencies);

        QMetaObject::connectSlotsByName(Frag_Interface_PotionPreferencies);
    } // setupUi

    void retranslateUi(QWidget *Frag_Interface_PotionPreferencies)
    {
        Frag_Interface_PotionPreferencies->setWindowTitle(QCoreApplication::translate("Frag_Interface_PotionPreferencies", "Form", nullptr));
        label->setText(QCoreApplication::translate("Frag_Interface_PotionPreferencies", "Pr\303\251f\303\251rences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frag_Interface_PotionPreferencies: public Ui_Frag_Interface_PotionPreferencies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_INTERFACE_POTIONPREFERENCIES_H
