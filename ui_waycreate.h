/********************************************************************************
** Form generated from reading UI file 'waycreate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYCREATE_H
#define UI_WAYCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WayCreate
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonAuto;
    QRadioButton *radioButtonHand;
    QRadioButton *radioButtonFile;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *WayCreate)
    {
        if (WayCreate->objectName().isEmpty())
            WayCreate->setObjectName(QString::fromUtf8("WayCreate"));
        WayCreate->resize(400, 300);
        WayCreate->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 208, 255);"));
        label = new QLabel(WayCreate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 201, 17));
        groupBox = new QGroupBox(WayCreate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 181, 141));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonAuto = new QRadioButton(groupBox);
        radioButtonAuto->setObjectName(QString::fromUtf8("radioButtonAuto"));
        radioButtonAuto->setChecked(true);

        verticalLayout->addWidget(radioButtonAuto);

        radioButtonHand = new QRadioButton(groupBox);
        radioButtonHand->setObjectName(QString::fromUtf8("radioButtonHand"));

        verticalLayout->addWidget(radioButtonHand);

        radioButtonFile = new QRadioButton(groupBox);
        radioButtonFile->setObjectName(QString::fromUtf8("radioButtonFile"));

        verticalLayout->addWidget(radioButtonFile);

        label_2 = new QLabel(WayCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(29, 210, 85, 29));
        layoutWidget = new QWidget(WayCreate);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(-10, 250, 425, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(WayCreate);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 210, 113, 29));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(WayCreate);

        QMetaObject::connectSlotsByName(WayCreate);
    } // setupUi

    void retranslateUi(QDialog *WayCreate)
    {
        WayCreate->setWindowTitle(QCoreApplication::translate("WayCreate", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WayCreate", "\320\241\320\277\320\276\321\201\320\276\320\261 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        groupBox->setTitle(QString());
        radioButtonAuto->setText(QCoreApplication::translate("WayCreate", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270", nullptr));
        radioButtonHand->setText(QCoreApplication::translate("WayCreate", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        radioButtonFile->setText(QCoreApplication::translate("WayCreate", "\320\270\320\267 \321\204\320\260\320\271\320\273\320\260 input.txt", nullptr));
        label_2->setText(QCoreApplication::translate("WayCreate", "\320\230\320\274\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        pushButton->setText(QCoreApplication::translate("WayCreate", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        lineEdit->setText(QCoreApplication::translate("WayCreate", "A2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WayCreate: public Ui_WayCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYCREATE_H
