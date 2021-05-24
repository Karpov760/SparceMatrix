/********************************************************************************
** Form generated from reading UI file 'autocreate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCREATE_H
#define UI_AUTOCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_autoCreate
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QSpinBox *r1;
    QSpinBox *r2;
    QDoubleSpinBox *kz;
    QDoubleSpinBox *d2;
    QDoubleSpinBox *d1;

    void setupUi(QDialog *autoCreate)
    {
        if (autoCreate->objectName().isEmpty())
            autoCreate->setObjectName(QString::fromUtf8("autoCreate"));
        autoCreate->resize(412, 210);
        autoCreate->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 208, 255);"));
        label = new QLabel(autoCreate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 121, 17));
        label_2 = new QLabel(autoCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 181, 17));
        label_4 = new QLabel(autoCreate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 141, 17));
        pushButton = new QPushButton(autoCreate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 87, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));
        r1 = new QSpinBox(autoCreate);
        r1->setObjectName(QString::fromUtf8("r1"));
        r1->setGeometry(QRect(180, 30, 61, 27));
        r1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        r1->setMinimum(10);
        r1->setMaximum(10000);
        r1->setValue(10);
        r2 = new QSpinBox(autoCreate);
        r2->setObjectName(QString::fromUtf8("r2"));
        r2->setGeometry(QRect(270, 30, 61, 27));
        r2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        r2->setMinimum(10);
        r2->setMaximum(10000);
        r2->setValue(10);
        kz = new QDoubleSpinBox(autoCreate);
        kz->setObjectName(QString::fromUtf8("kz"));
        kz->setGeometry(QRect(220, 70, 62, 27));
        kz->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        kz->setMaximum(1.000000000000000);
        kz->setSingleStep(0.010000000000000);
        kz->setValue(0.100000000000000);
        d2 = new QDoubleSpinBox(autoCreate);
        d2->setObjectName(QString::fromUtf8("d2"));
        d2->setGeometry(QRect(270, 110, 62, 27));
        d2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        d2->setMinimum(-1000.000000000000000);
        d2->setMaximum(1000.000000000000000);
        d2->setSingleStep(10.000000000000000);
        d2->setValue(10.000000000000000);
        d1 = new QDoubleSpinBox(autoCreate);
        d1->setObjectName(QString::fromUtf8("d1"));
        d1->setGeometry(QRect(180, 110, 62, 27));
        d1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        d1->setMinimum(-1000.000000000000000);
        d1->setMaximum(1000.000000000000000);
        d1->setSingleStep(10.000000000000000);

        retranslateUi(autoCreate);

        QMetaObject::connectSlotsByName(autoCreate);
    } // setupUi

    void retranslateUi(QDialog *autoCreate)
    {
        autoCreate->setWindowTitle(QCoreApplication::translate("autoCreate", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("autoCreate", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        label_2->setText(QCoreApplication::translate("autoCreate", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\267\320\260\320\277\320\276\320\273\320\265\320\275\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_4->setText(QCoreApplication::translate("autoCreate", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271:", nullptr));
        pushButton->setText(QCoreApplication::translate("autoCreate", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class autoCreate: public Ui_autoCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCREATE_H
