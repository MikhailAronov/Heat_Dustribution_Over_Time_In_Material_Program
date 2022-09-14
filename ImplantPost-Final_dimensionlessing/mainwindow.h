#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bodyofcalculation.h"
#include "hope.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void SendVariablesWithEnv(double kM, double cM, double dM, double x1, double T01,
                              double ki, double ci, double di, double x2, double T02, double T,
                              double kW, double cW, double dW, double T0W, bool Env, double tau, bool tmStep, double h, bool cdStep);
    void SendVariablesNoEnv(double kM, double cM, double dM, double x1, double T01,
                            double ki, double ci, double di, double x2, double T02, double T,
                            double kW, double cW, double dW, double T0W, bool Env, double tau, bool tmStep, double h, bool cdStep);
private slots:
    void on_pushButton_clicked();
    void on_EnvCheckBox_clicked(bool checked);
    void rise();

    void on_timeStep_clicked(bool checked);

    void on_coordStep_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    BodyOfCalculation *BOC;
    hope *circle;
};
#endif // MAINWINDOW_H
