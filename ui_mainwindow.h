/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *MainCreateButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *availabelM;
    QPushButton *Delete;
    QPushButton *Print;
    QLabel *label;
    QTextBrowser *resultPole1;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *firstMatr;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *plusButton;
    QRadioButton *minusButton;
    QRadioButton *mulButton;
    QRadioButton *divButton;
    QComboBox *secondMatr;
    QPushButton *Arifmetic;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QCheckBox *cr_new;
    QCheckBox *wrtite_file;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(729, 600);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 208, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainCreateButton = new QPushButton(centralWidget);
        MainCreateButton->setObjectName(QString::fromUtf8("MainCreateButton"));
        MainCreateButton->setGeometry(QRect(10, 70, 141, 51));
        QFont font1;
        font1.setPointSize(10);
        MainCreateButton->setFont(font1);
        MainCreateButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 250, 141, 171));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        availabelM = new QComboBox(groupBox);
        availabelM->setObjectName(QString::fromUtf8("availabelM"));
        availabelM->setFont(font1);
        availabelM->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(availabelM);

        Delete = new QPushButton(groupBox);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setFont(font1);
        Delete->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));

        verticalLayout->addWidget(Delete);

        Print = new QPushButton(groupBox);
        Print->setObjectName(QString::fromUtf8("Print"));
        Print->setFont(font1);
        Print->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));
        Print->setAutoDefault(false);

        verticalLayout->addWidget(Print);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 180, 131, 61));
        QFont font2;
        font2.setPointSize(11);
        label->setFont(font2);
        resultPole1 = new QTextBrowser(centralWidget);
        resultPole1->setObjectName(QString::fromUtf8("resultPole1"));
        resultPole1->setGeometry(QRect(160, 180, 561, 381));
        resultPole1->setLineWrapMode(QTextEdit::NoWrap);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(160, 40, 341, 121));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 243, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstMatr = new QComboBox(layoutWidget);
        firstMatr->setObjectName(QString::fromUtf8("firstMatr"));
        firstMatr->setFont(font1);
        firstMatr->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(firstMatr);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        plusButton = new QRadioButton(layoutWidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        QFont font3;
        font3.setPointSize(9);
        plusButton->setFont(font3);
        plusButton->setChecked(true);

        verticalLayout_2->addWidget(plusButton);

        minusButton = new QRadioButton(layoutWidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setFont(font3);
        minusButton->setChecked(false);

        verticalLayout_2->addWidget(minusButton);

        mulButton = new QRadioButton(layoutWidget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setFont(font3);
        mulButton->setChecked(false);

        verticalLayout_2->addWidget(mulButton);

        divButton = new QRadioButton(layoutWidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setFont(font3);
        divButton->setChecked(false);

        verticalLayout_2->addWidget(divButton);


        horizontalLayout->addLayout(verticalLayout_2);

        secondMatr = new QComboBox(layoutWidget);
        secondMatr->setObjectName(QString::fromUtf8("secondMatr"));
        secondMatr->setFont(font1);
        secondMatr->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(secondMatr);

        Arifmetic = new QPushButton(groupBox_2);
        Arifmetic->setObjectName(QString::fromUtf8("Arifmetic"));
        Arifmetic->setGeometry(QRect(280, 40, 41, 31));
        Arifmetic->setFont(font1);
        Arifmetic->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 203, 148, 255), stop:1 rgba(8, 199, 130, 255));"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(540, 40, 181, 121));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 172, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);

        cr_new = new QCheckBox(layoutWidget1);
        cr_new->setObjectName(QString::fromUtf8("cr_new"));
        cr_new->setFont(font1);

        verticalLayout_3->addWidget(cr_new);

        wrtite_file = new QCheckBox(layoutWidget1);
        wrtite_file->setObjectName(QString::fromUtf8("wrtite_file"));
        wrtite_file->setFont(font1);

        verticalLayout_3->addWidget(wrtite_file);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainCreateButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Print->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\265\321\207\320\260\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \n"
"\320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        groupBox_2->setTitle(QString());
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "1/", nullptr));
        Arifmetic->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        cr_new->setText(QCoreApplication::translate("MainWindow", "\320\262 \320\275\320\276\320\262\321\203\321\216 \320\274\320\260\321\202\321\200\320\270\321\206\321\203", nullptr));
        wrtite_file->setText(QCoreApplication::translate("MainWindow", "\320\262 \321\204\320\260\320\271\320\273 output.txt", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
