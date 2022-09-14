#ifndef HOPE_H
#define HOPE_H

#include <QDialog>
#include <QWidget>
#include "qcustomplot.h"

namespace Ui {
class hope;
}

class hope : public QDialog
{
    Q_OBJECT

public:
    explicit hope(QWidget *parent = nullptr);
    ~hope();

signals:
    void toBegining();

private:
    Ui::hope *ui;

private slots:
    void finalWindow(double lenlowerthen32, const int M, double Xrup, double x1, double x2, double T01, double T02, double mostcoldtime, double T, double h);
    void on_quit_clicked();
    void on_returntomain_clicked();
    void on_radioButtonColdGraph_toggled(bool checked);
    void on_radioButtonFinalGraph_toggled(bool checked);
};

#endif // HOPE_H
