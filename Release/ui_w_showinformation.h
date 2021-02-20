/********************************************************************************
** Form generated from reading UI file 'w_showinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SHOWINFORMATION_H
#define UI_W_SHOWINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_W_showInformation
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *data_image;
    QLabel *data_textDisplayed;

    void setupUi(QWidget *W_showInformation)
    {
        if (W_showInformation->objectName().isEmpty())
            W_showInformation->setObjectName(QString::fromUtf8("W_showInformation"));
        W_showInformation->resize(300, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(W_showInformation->sizePolicy().hasHeightForWidth());
        W_showInformation->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(W_showInformation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 271, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        data_image = new QLabel(layoutWidget);
        data_image->setObjectName(QString::fromUtf8("data_image"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(data_image->sizePolicy().hasHeightForWidth());
        data_image->setSizePolicy(sizePolicy1);
        data_image->setMinimumSize(QSize(150, 150));
        data_image->setMaximumSize(QSize(150, 150));
        data_image->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image:url(:/graphicItems/frame.png);\n"
"}"));
        data_image->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(data_image);


        verticalLayout->addLayout(horizontalLayout);

        data_textDisplayed = new QLabel(layoutWidget);
        data_textDisplayed->setObjectName(QString::fromUtf8("data_textDisplayed"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font.setPointSize(12);
        font.setItalic(true);
        data_textDisplayed->setFont(font);
        data_textDisplayed->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        data_textDisplayed->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(data_textDisplayed);


        retranslateUi(W_showInformation);

        QMetaObject::connectSlotsByName(W_showInformation);
    } // setupUi

    void retranslateUi(QWidget *W_showInformation)
    {
        W_showInformation->setWindowTitle(QCoreApplication::translate("W_showInformation", "Form", nullptr));
        data_image->setText(QString());
        data_textDisplayed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class W_showInformation: public Ui_W_showInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SHOWINFORMATION_H
