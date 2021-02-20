/********************************************************************************
** Form generated from reading UI file 'frag_stats_displayer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAG_STATS_DISPLAYER_H
#define UI_FRAG_STATS_DISPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frag_Stats_Displayer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *data_image;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *data_name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *data_current;
    QLabel *label_3;
    QLabel *data_max;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Frag_Stats_Displayer)
    {
        if (Frag_Stats_Displayer->objectName().isEmpty())
            Frag_Stats_Displayer->setObjectName(QString::fromUtf8("Frag_Stats_Displayer"));
        Frag_Stats_Displayer->resize(347, 82);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frag_Stats_Displayer->sizePolicy().hasHeightForWidth());
        Frag_Stats_Displayer->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Frag_Stats_Displayer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        data_image = new QLabel(Frag_Stats_Displayer);
        data_image->setObjectName(QString::fromUtf8("data_image"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_image->sizePolicy().hasHeightForWidth());
        data_image->setSizePolicy(sizePolicy1);
        data_image->setMinimumSize(QSize(60, 60));
        data_image->setMaximumSize(QSize(60, 60));
        data_image->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(data_image);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        data_name = new QLabel(Frag_Stats_Displayer);
        data_name->setObjectName(QString::fromUtf8("data_name"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(data_name->sizePolicy().hasHeightForWidth());
        data_name->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Display"));
        font.setPointSize(10);
        font.setItalic(true);
        data_name->setFont(font);
        data_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(data_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        data_current = new QLabel(Frag_Stats_Displayer);
        data_current->setObjectName(QString::fromUtf8("data_current"));
        sizePolicy2.setHeightForWidth(data_current->sizePolicy().hasHeightForWidth());
        data_current->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        data_current->setFont(font1);
        data_current->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));

        horizontalLayout->addWidget(data_current);

        label_3 = new QLabel(Frag_Stats_Displayer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));

        horizontalLayout->addWidget(label_3);

        data_max = new QLabel(Frag_Stats_Displayer);
        data_max->setObjectName(QString::fromUtf8("data_max"));
        sizePolicy2.setHeightForWidth(data_max->sizePolicy().hasHeightForWidth());
        data_max->setSizePolicy(sizePolicy2);
        data_max->setFont(font1);
        data_max->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));

        horizontalLayout->addWidget(data_max);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Frag_Stats_Displayer);

        QMetaObject::connectSlotsByName(Frag_Stats_Displayer);
    } // setupUi

    void retranslateUi(QWidget *Frag_Stats_Displayer)
    {
        Frag_Stats_Displayer->setWindowTitle(QCoreApplication::translate("Frag_Stats_Displayer", "Form", nullptr));
        data_image->setText(QString());
        data_name->setText(QString());
        data_current->setText(QString());
        label_3->setText(QCoreApplication::translate("Frag_Stats_Displayer", "/", nullptr));
        data_max->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frag_Stats_Displayer: public Ui_Frag_Stats_Displayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAG_STATS_DISPLAYER_H
