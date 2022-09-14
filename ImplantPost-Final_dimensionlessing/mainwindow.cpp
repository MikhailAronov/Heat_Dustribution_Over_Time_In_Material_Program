#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bodyofcalculation.h"
#include <QDebug>
#include <QValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    this->setWindowTitle("Two Layers Heat Calculator");
    QDoubleValidator *LineCheck = new QDoubleValidator;
    LineCheck->setNotation(QDoubleValidator::StandardNotation);
    LineCheck->setLocale(QLocale::English);

    ui->K1->setValidator(LineCheck);
    ui->C1->setValidator(LineCheck);
    ui->D1->setValidator(LineCheck);
    ui->L1->setValidator(LineCheck);
    ui->T01->setValidator(LineCheck);
    ui->K2->setValidator(LineCheck);
    ui->C2->setValidator(LineCheck);
    ui->D2->setValidator(LineCheck);
    ui->L2->setValidator(LineCheck);
    ui->T02->setValidator(LineCheck);
    ui->Time->setValidator(LineCheck);
    ui->Cenv->setValidator(LineCheck);
    ui->Denv->setValidator(LineCheck);
    ui->Kenv->setValidator(LineCheck);
    ui->T0env->setValidator(LineCheck);
    ui->timeSteptau->setValidator(LineCheck);
    ui->coordSteph->setValidator(LineCheck);

    ui->EnvSpecNameLabel->hide();
    ui->EnvSpecWarnLabel->hide();
    ui->Cenv->hide();
    ui->CenvName->hide();
    ui->Denv->hide();
    ui->DenvName->hide();
    ui->Kenv->hide();
    ui->KenvName->hide();
    ui->T0env->hide();
    ui->T0envName->hide();
    ui->timeSteplabel->hide();
    ui->coordSteplabel->hide();
    ui->timeSteptau->hide();
    ui->coordSteph->hide();


    BOC = new BodyOfCalculation();
    connect(this, SIGNAL(SendVariablesWithEnv(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, bool, double, bool, double, bool)),
            BOC, SLOT(HeatCalculation(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, bool, double, bool, double, bool)));
    connect(this, SIGNAL(SendVariablesNoEnv(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, bool, double, bool, double, bool)),
            BOC, SLOT(HeatCalculation(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, bool, double, bool, double, bool)));

    circle = new hope();
    connect(circle, SIGNAL(toBegining()), this, SLOT(rise()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rise() {
  //  MainWindow *w = new MainWindow(this);
    //w->show();
}

void MainWindow::on_pushButton_clicked()
{
    double kM = (ui->K1->text().replace(',', '.')).toDouble();
    double cM = (ui->C1->text().replace(',', '.')).toDouble();
    double dM = (ui->D1->text().replace(',', '.')).toDouble();
    double x1 = (ui->L1->text().replace(',', '.')).toDouble()/1000000; //Все вот эти вот твои умные деления на миллион это перевод в систему СИ
    double T01 = (ui->T01->text().replace(',', '.')).toDouble();
    double ki = (ui->K2->text().replace(',', '.')).toDouble();
    double ci = (ui->C2->text().replace(',', '.')).toDouble();
    double di = (ui->D2->text().replace(',', '.')).toDouble();
    double x2 = (ui->L2->text().replace(',', '.')).toDouble()/1000000;
    double T02 = (ui->T02->text().replace(',', '.')).toDouble();
    double T = (ui->Time->text().replace(',', '.')).toDouble()/1000;
    bool tmStep, cdStep;
    double h, tau;

    if (ui->EnvCheckBox->isChecked() == 1) {
    double kW = (ui->Kenv->text().replace(',', '.')).toDouble();
    double cW = (ui->Cenv->text().replace(',', '.')).toDouble();
    double dW = (ui->Denv->text().replace(',', '.')).toDouble();
    double T0W = (ui->T0env->text().replace(',', '.')).toDouble();
    bool Env = true;
    if (ui->timeStep->isChecked() == 1) {
        if (ui->timeSteptau->text().isEmpty()) {
            tau=0;
            tmStep=false;
        } else {
            tau = (ui->timeSteptau->text().replace(',', '.')).toDouble()/1000;
            tmStep=true;
        }
    } else /*if (ui->timeStep->isChecked() == 0)*/ {
        tau=0;
        tmStep=false;
    }
    if (ui->coordStep->isChecked() == 1) {
        if (ui->coordSteph->text().isEmpty()) {
            h = 0;
            cdStep=false;
        } else {
            h = (ui->coordSteph->text().replace(',', '.')).toDouble()/1000000;
            cdStep=true;
        }
    } else /*if (ui->coordStep->isChecked() == 0)*/ {
        h = 0;
        cdStep=false;
    }
    emit SendVariablesWithEnv(kM, cM, dM, x1, T01,
                              ki, ci, di, x2, T02, T,
                              kW, cW, dW, T0W, Env, tau, tmStep, h, cdStep);
    } else if (ui->EnvCheckBox->isChecked() == 0) {
    bool Env = false;
    if (ui->timeStep->isChecked() == 1) {
        if (ui->timeSteptau->text().isEmpty()) {
            tau=0;
            tmStep=false;
        } else {
            tau = (ui->timeSteptau->text().replace(',', '.')).toDouble()/1000;
            tmStep=true;
        }
    } else /*if (ui->timeStep->isChecked() == 0)*/ {
        tau=0;
        tmStep=false;
    }
    if (ui->coordStep->isChecked() == 1) {
        if (ui->coordSteph->text().isEmpty()) {
            h = 0;
            cdStep=false;
        } else {
            h = (ui->coordSteph->text().replace(',', '.')).toDouble()/1000000;
            cdStep=true;
        }
    } else /*if (ui->coordStep->isChecked() == 0)*/ {
        h = 0;
        cdStep=false;
    }
    emit SendVariablesNoEnv(kM, cM, dM, x1, T01,
                            ki, ci, di, x2, T02, T,
                            0, 0, 0, 0, Env, tau, tmStep, h, cdStep);
    }
    qDebug() << kM << dM << T01 << ci << x2 << T;
    this->close();
}

void MainWindow::on_EnvCheckBox_clicked(bool checked)
{
    if(checked) {
        ui->EnvSpecNameLabel->show();
        ui->EnvSpecWarnLabel->show();
        ui->Cenv->show();
        ui->CenvName->show();
        ui->Denv->show();
        ui->DenvName->show();
        ui->Kenv->show();
        ui->KenvName->show();
        ui->T0env->show();
        ui->T0envName->show();
    } else {
        ui->EnvSpecNameLabel->hide();
        ui->EnvSpecWarnLabel->hide();
        ui->Cenv->hide();
        ui->CenvName->hide();
        ui->Denv->hide();
        ui->DenvName->hide();
        ui->Kenv->hide();
        ui->KenvName->hide();
        ui->T0env->hide();
        ui->T0envName->hide();
    }
}

void MainWindow::on_timeStep_clicked(bool checked)
{
    if(checked) {
        ui->timeSteplabel->show();
        ui->timeSteptau->show();

    } else {
        ui->timeSteplabel->hide();
        ui->timeSteptau->hide();
    }
}

void MainWindow::on_coordStep_clicked(bool checked)
{
    if(checked) {
        ui->coordSteplabel->show();
        ui->coordSteph->show();

    } else {
        ui->coordSteplabel->hide();
        ui->coordSteph->hide();

    }
}
