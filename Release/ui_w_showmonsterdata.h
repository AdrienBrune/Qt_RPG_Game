/********************************************************************************
** Form generated from reading UI file 'w_showmonsterdata.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SHOWMONSTERDATA_H
#define UI_W_SHOWMONSTERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_W_showMonsterData
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *data_image;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *data_name;
    QProgressBar *data_life;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *data_menaceLv;
    QLabel *data_threatLabel;

    void setupUi(QWidget *W_showMonsterData)
    {
        if (W_showMonsterData->objectName().isEmpty())
            W_showMonsterData->setObjectName(QString::fromUtf8("W_showMonsterData"));
        W_showMonsterData->resize(300, 300);
        W_showMonsterData->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(W_showMonsterData);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        data_image = new QLabel(W_showMonsterData);
        data_image->setObjectName(QString::fromUtf8("data_image"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(data_image->sizePolicy().hasHeightForWidth());
        data_image->setSizePolicy(sizePolicy);
        data_image->setMinimumSize(QSize(100, 100));
        data_image->setMaximumSize(QSize(100, 100));
        data_image->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(data_image);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        data_name = new QLabel(W_showMonsterData);
        data_name->setObjectName(QString::fromUtf8("data_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_name->sizePolicy().hasHeightForWidth());
        data_name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Malgun Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        data_name->setFont(font);
        data_name->setStyleSheet(QString::fromUtf8("color:white;"));
        data_name->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(data_name, 0, Qt::AlignLeft|Qt::AlignBottom);

        data_life = new QProgressBar(W_showMonsterData);
        data_life->setObjectName(QString::fromUtf8("data_life"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(data_life->sizePolicy().hasHeightForWidth());
        data_life->setSizePolicy(sizePolicy2);
        data_life->setMinimumSize(QSize(150, 10));
        data_life->setMaximumSize(QSize(150, 10));
        data_life->setValue(78);
        data_life->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_life->setTextVisible(false);

        verticalLayout_2->addWidget(data_life);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        data_menaceLv = new QLabel(W_showMonsterData);
        data_menaceLv->setObjectName(QString::fromUtf8("data_menaceLv"));
        sizePolicy.setHeightForWidth(data_menaceLv->sizePolicy().hasHeightForWidth());
        data_menaceLv->setSizePolicy(sizePolicy);
        data_menaceLv->setMinimumSize(QSize(80, 80));
        data_menaceLv->setMaximumSize(QSize(80, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Impact"));
        font1.setPointSize(13);
        data_menaceLv->setFont(font1);
        data_menaceLv->setStyleSheet(QString::fromUtf8("color:white;"));
        data_menaceLv->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(data_menaceLv, 0, Qt::AlignHCenter);

        data_threatLabel = new QLabel(W_showMonsterData);
        data_threatLabel->setObjectName(QString::fromUtf8("data_threatLabel"));
        sizePolicy2.setHeightForWidth(data_threatLabel->sizePolicy().hasHeightForWidth());
        data_threatLabel->setSizePolicy(sizePolicy2);
        data_threatLabel->setMinimumSize(QSize(0, 0));
        data_threatLabel->setMaximumSize(QSize(1000, 1000));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Malgun Gothic"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        data_threatLabel->setFont(font2);
        data_threatLabel->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout->addWidget(data_threatLabel, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(W_showMonsterData);

        QMetaObject::connectSlotsByName(W_showMonsterData);
    } // setupUi

    void retranslateUi(QWidget *W_showMonsterData)
    {
        W_showMonsterData->setWindowTitle(QCoreApplication::translate("W_showMonsterData", "Form", nullptr));
        data_image->setText(QString());
        data_name->setText(QCoreApplication::translate("W_showMonsterData", "Loup", nullptr));
        data_menaceLv->setText(QString());
        data_threatLabel->setText(QCoreApplication::translate("W_showMonsterData", "Menace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class W_showMonsterData: public Ui_W_showMonsterData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SHOWMONSTERDATA_H
