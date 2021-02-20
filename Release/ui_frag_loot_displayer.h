/********************************************************************************
** Form generated from reading UI file 'frag_loot_displayer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_LOOT_DISPLAYER_H
#define UI_FRAG_LOOT_DISPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_loot_displayer
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *data_image;
    QSpinBox *data_number;
    QLabel *data_name;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Frag_loot_displayer)
    {
        if (Frag_loot_displayer->objectName().isEmpty())
            Frag_loot_displayer->setObjectName(QString::fromUtf8("Frag_loot_displayer"));
        Frag_loot_displayer->resize(500, 80);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frag_loot_displayer->sizePolicy().hasHeightForWidth());
        Frag_loot_displayer->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(Frag_loot_displayer);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        data_image = new QLabel(Frag_loot_displayer);
        data_image->setObjectName(QString::fromUtf8("data_image"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_image->sizePolicy().hasHeightForWidth());
        data_image->setSizePolicy(sizePolicy1);
        data_image->setMinimumSize(QSize(50, 50));
        data_image->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Narrow"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        data_image->setFont(font);

        horizontalLayout->addWidget(data_image, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        data_number = new QSpinBox(Frag_loot_displayer);
        data_number->setObjectName(QString::fromUtf8("data_number"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(data_number->sizePolicy().hasHeightForWidth());
        data_number->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        data_number->setFont(font1);
        data_number->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border:no border;\n"
"	background-color: rgba(0,0,0,0);\n"
"	color : #FFFFFF;\n"
"}\n"
""));
        data_number->setAlignment(Qt::AlignCenter);
        data_number->setReadOnly(true);
        data_number->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(data_number, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        data_name = new QLabel(Frag_loot_displayer);
        data_name->setObjectName(QString::fromUtf8("data_name"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(data_name->sizePolicy().hasHeightForWidth());
        data_name->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka Small"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        data_name->setFont(font2);
        data_name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#FFFFFF\n"
"}"));
        data_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(data_name, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Frag_loot_displayer);

        QMetaObject::connectSlotsByName(Frag_loot_displayer);
    } // setupUi

    void retranslateUi(QWidget *Frag_loot_displayer)
    {
        Frag_loot_displayer->setWindowTitle(QCoreApplication::translate("Frag_loot_displayer", "Form", nullptr));
        data_image->setText(QString());
        data_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frag_loot_displayer: public Ui_Frag_loot_displayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_LOOT_DISPLAYER_H
