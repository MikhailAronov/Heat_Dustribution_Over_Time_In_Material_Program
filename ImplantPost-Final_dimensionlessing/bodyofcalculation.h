#ifndef BODYOFCALCULATION_H
#define BODYOFCALCULATION_H
#include <QDialog>
#include <QWidget>
#include "hope.h"

namespace Ui {
class BodyOfCalculation;
}


class BodyOfCalculation : public QDialog
{
    Q_OBJECT

public:
    explicit BodyOfCalculation(QWidget *parent = nullptr);
    ~BodyOfCalculation();

public slots:
    void HeatCalculation(double kM, double cM, double dM, double x1, double T01,
                         double ki, double ci, double di, double x2, double T02, double T,
                         double kW, double cW, double dW, double T0W, bool Env, double tau, bool tmStep, double h, bool cdStep);

signals:
    void ShowResult(double lenlowerthen32, const int M, double Xrup, double x1, double x2, double T01, double T02, double mostcoldtime, double T, double h);


private:
    Ui::BodyOfCalculation *ui;
    hope *final;
};

#endif // BODYOFCALCULATION_H
