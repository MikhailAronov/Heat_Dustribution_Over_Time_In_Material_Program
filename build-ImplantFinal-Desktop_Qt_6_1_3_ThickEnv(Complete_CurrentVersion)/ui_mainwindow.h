/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *K1;
    QLabel *label_3;
    QLineEdit *C1;
    QLabel *label_5;
    QLineEdit *D1;
    QLabel *label_7;
    QLineEdit *L1;
    QLabel *label_13;
    QLineEdit *T01;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *K2;
    QLabel *label_4;
    QLineEdit *C2;
    QLabel *label_6;
    QLineEdit *D2;
    QLabel *label_8;
    QLineEdit *L2;
    QLabel *label_14;
    QLineEdit *T02;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_18;
    QLineEdit *Time;
    QLabel *timeSteplabel;
    QLineEdit *timeSteptau;
    QLabel *coordSteplabel;
    QLineEdit *coordSteph;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *EnvCheckBox;
    QCheckBox *timeStep;
    QCheckBox *coordStep;
    QGridLayout *EnvSpecificName;
    QLabel *EnvSpecNameLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *EnvSpecWarnLabel;
    QHBoxLayout *EnvSpecific;
    QLabel *KenvName;
    QLineEdit *Kenv;
    QLabel *CenvName;
    QLineEdit *Cenv;
    QLabel *DenvName;
    QLineEdit *Denv;
    QLabel *T0envName;
    QLineEdit *T0env;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(817, 662);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(16);
        label_17->setFont(font);

        horizontalLayout_3->addWidget(label_17);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(14);
        label_12->setFont(font1);

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_9->addWidget(label);

        K1 = new QLineEdit(centralwidget);
        K1->setObjectName(QString::fromUtf8("K1"));

        horizontalLayout_9->addWidget(K1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        C1 = new QLineEdit(centralwidget);
        C1->setObjectName(QString::fromUtf8("C1"));

        horizontalLayout_9->addWidget(C1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        D1 = new QLineEdit(centralwidget);
        D1->setObjectName(QString::fromUtf8("D1"));

        horizontalLayout_9->addWidget(D1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        L1 = new QLineEdit(centralwidget);
        L1->setObjectName(QString::fromUtf8("L1"));

        horizontalLayout_9->addWidget(L1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_9->addWidget(label_13);

        T01 = new QLineEdit(centralwidget);
        T01->setObjectName(QString::fromUtf8("T01"));

        horizontalLayout_9->addWidget(T01);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        K2 = new QLineEdit(centralwidget);
        K2->setObjectName(QString::fromUtf8("K2"));

        horizontalLayout_8->addWidget(K2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        C2 = new QLineEdit(centralwidget);
        C2->setObjectName(QString::fromUtf8("C2"));

        horizontalLayout_8->addWidget(C2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        D2 = new QLineEdit(centralwidget);
        D2->setObjectName(QString::fromUtf8("D2"));

        horizontalLayout_8->addWidget(D2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        L2 = new QLineEdit(centralwidget);
        L2->setObjectName(QString::fromUtf8("L2"));

        horizontalLayout_8->addWidget(L2);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        T02 = new QLineEdit(centralwidget);
        T02->setObjectName(QString::fromUtf8("T02"));

        horizontalLayout_8->addWidget(T02);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout->addWidget(label_18);

        Time = new QLineEdit(centralwidget);
        Time->setObjectName(QString::fromUtf8("Time"));

        horizontalLayout->addWidget(Time);

        timeSteplabel = new QLabel(centralwidget);
        timeSteplabel->setObjectName(QString::fromUtf8("timeSteplabel"));

        horizontalLayout->addWidget(timeSteplabel);

        timeSteptau = new QLineEdit(centralwidget);
        timeSteptau->setObjectName(QString::fromUtf8("timeSteptau"));

        horizontalLayout->addWidget(timeSteptau);

        coordSteplabel = new QLabel(centralwidget);
        coordSteplabel->setObjectName(QString::fromUtf8("coordSteplabel"));

        horizontalLayout->addWidget(coordSteplabel);

        coordSteph = new QLineEdit(centralwidget);
        coordSteph->setObjectName(QString::fromUtf8("coordSteph"));

        horizontalLayout->addWidget(coordSteph);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        EnvCheckBox = new QCheckBox(centralwidget);
        EnvCheckBox->setObjectName(QString::fromUtf8("EnvCheckBox"));

        horizontalLayout_5->addWidget(EnvCheckBox);

        timeStep = new QCheckBox(centralwidget);
        timeStep->setObjectName(QString::fromUtf8("timeStep"));

        horizontalLayout_5->addWidget(timeStep);

        coordStep = new QCheckBox(centralwidget);
        coordStep->setObjectName(QString::fromUtf8("coordStep"));

        horizontalLayout_5->addWidget(coordStep);


        verticalLayout->addLayout(horizontalLayout_5);

        EnvSpecificName = new QGridLayout();
        EnvSpecificName->setObjectName(QString::fromUtf8("EnvSpecificName"));
        EnvSpecNameLabel = new QLabel(centralwidget);
        EnvSpecNameLabel->setObjectName(QString::fromUtf8("EnvSpecNameLabel"));
        EnvSpecNameLabel->setFont(font1);

        EnvSpecificName->addWidget(EnvSpecNameLabel, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        EnvSpecificName->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        EnvSpecificName->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        EnvSpecWarnLabel = new QLabel(centralwidget);
        EnvSpecWarnLabel->setObjectName(QString::fromUtf8("EnvSpecWarnLabel"));

        EnvSpecificName->addWidget(EnvSpecWarnLabel, 1, 1, 1, 1);


        verticalLayout->addLayout(EnvSpecificName);

        EnvSpecific = new QHBoxLayout();
        EnvSpecific->setObjectName(QString::fromUtf8("EnvSpecific"));
        KenvName = new QLabel(centralwidget);
        KenvName->setObjectName(QString::fromUtf8("KenvName"));

        EnvSpecific->addWidget(KenvName);

        Kenv = new QLineEdit(centralwidget);
        Kenv->setObjectName(QString::fromUtf8("Kenv"));

        EnvSpecific->addWidget(Kenv);

        CenvName = new QLabel(centralwidget);
        CenvName->setObjectName(QString::fromUtf8("CenvName"));

        EnvSpecific->addWidget(CenvName);

        Cenv = new QLineEdit(centralwidget);
        Cenv->setObjectName(QString::fromUtf8("Cenv"));

        EnvSpecific->addWidget(Cenv);

        DenvName = new QLabel(centralwidget);
        DenvName->setObjectName(QString::fromUtf8("DenvName"));

        EnvSpecific->addWidget(DenvName);

        Denv = new QLineEdit(centralwidget);
        Denv->setObjectName(QString::fromUtf8("Denv"));

        EnvSpecific->addWidget(Denv);

        T0envName = new QLabel(centralwidget);
        T0envName->setObjectName(QString::fromUtf8("T0envName"));

        EnvSpecific->addWidget(T0envName);

        T0env = new QLineEdit(centralwidget);
        T0env->setObjectName(QString::fromUtf8("T0env"));

        EnvSpecific->addWidget(T0env);


        verticalLayout->addLayout(EnvSpecific);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 817, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\321\213 \320\262 \320\264\320\262\321\203\321\205\321\201\320\273\320\276\320\271\320\275\320\276\320\274 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273\320\265", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270 \321\201\320\273\320\276\321\221\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "K1 [\320\224\320\266/(\320\234*\321\201*\320\232)]", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "C1 [\320\224\320\266/(\320\232\320\263*\320\232)]", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\317\2011 [\320\232\320\263/(\320\234^3)]", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "L1 [\320\274\320\272\320\234]", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "T0 1 [\320\232]", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "K2 [\320\224\320\266/(\320\234*\321\201*\320\232)]", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "C2 [\320\224\320\266/(\320\232\320\263*\320\232)]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\317\2012 [\320\232\320\263/(\320\234^3)]", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "L2 [\320\274\320\272\320\234]", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "T0 2 [\320\232]", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 [\320\274\321\201]", nullptr));
        timeSteplabel->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 [\320\274\321\201]", nullptr));
        coordSteplabel->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\277\320\276 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\265 [\320\274\320\272\320\274]", nullptr));
        EnvCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276 \320\262\320\275\320\265\321\210\320\275\320\265\320\271 \321\201\321\200\320\265\320\264\320\265 (\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262 \320\262\320\260\320\272\321\203\321\203\320\274\320\265)", nullptr));
        timeStep->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\210\320\260\320\263 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\262\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        coordStep->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\210\320\260\320\263 \320\277\320\276 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\265 \320\262\321\200\321\203\321\207\320\275\321\203\321\216.", nullptr));
        EnvSpecNameLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \321\201\321\200\320\265\320\264\321\213</p></body></html>", nullptr));
        EnvSpecWarnLabel->setText(QCoreApplication::translate("MainWindow", "(\320\261\320\265\320\267 \321\203\321\207\321\221\321\202\320\260 \320\262\320\267-\321\217 \320\275\320\260 \320\261\320\276\320\272\320\276\320\262\320\276\320\271 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270)", nullptr));
        KenvName->setText(QCoreApplication::translate("MainWindow", "K env [\320\224\320\266/(\320\234*\321\201*\320\232)]", nullptr));
        CenvName->setText(QCoreApplication::translate("MainWindow", "C env [\320\224\320\266/(\320\232\320\263*\320\232)]", nullptr));
        DenvName->setText(QCoreApplication::translate("MainWindow", "\317\201 env [\320\232\320\263/(\320\234^3)]", nullptr));
        T0envName->setText(QCoreApplication::translate("MainWindow", "T0 env [\320\232]", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
