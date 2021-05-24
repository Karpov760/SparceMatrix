/********************************************************************************
** Form generated from reading UI file 'handcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDCREATE_H
#define UI_HANDCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_handcreate
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *r1;
    QSpinBox *r2;

    void setupUi(QDialog *handcreate)
    {
        if (handcreate->objectName().isEmpty())
            handcreate->setObjectName(QString::fromUtf8("handcreate"));
        handcreate->resize(400, 300);
        handcreate->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 208, 255);"));
        pushButton = new QPushButton(handcreate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 87, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));
        label = new QLabel(handcreate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 111, 17));
        label_3 = new QLabel(handcreate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 241, 51));
        label_3->setWordWrap(true);
        plainTextEdit = new QPlainTextEdit(handcreate);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 110, 361, 141));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        r1 = new QSpinBox(handcreate);
        r1->setObjectName(QString::fromUtf8("r1"));
        r1->setGeometry(QRect(170, 20, 45, 27));
        r1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        r1->setMinimum(3);
        r1->setMaximum(10000);
        r1->setValue(3);
        r2 = new QSpinBox(handcreate);
        r2->setObjectName(QString::fromUtf8("r2"));
        r2->setGeometry(QRect(250, 20, 45, 27));
        r2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        r2->setMinimum(3);
        r2->setMaximum(10000);
        r2->setValue(3);

        retranslateUi(handcreate);

        QMetaObject::connectSlotsByName(handcreate);
    } // setupUi

    void retranslateUi(QDialog *handcreate)
    {
        handcreate->setWindowTitle(QCoreApplication::translate("handcreate", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("handcreate", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("handcreate", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        label_3->setText(QCoreApplication::translate("handcreate", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \320\277\320\276\321\201\321\202\321\200\320\276\321\207\320\275\320\276: (\320\262 \321\204\320\276\321\200\320\274\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\321\202\321\200\320\276\320\272\320\260 \321\201\320\276\320\273\320\261\320\265\321\206):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class handcreate: public Ui_handcreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDCREATE_H
