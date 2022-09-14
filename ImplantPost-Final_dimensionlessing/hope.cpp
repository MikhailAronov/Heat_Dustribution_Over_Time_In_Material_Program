#include "hope.h"
#include "ui_hope.h"
#include "mainwindow.h"
#include <QPixmap>
#include <QLabel>
#include <qcustomplot.h>
#include <QFile>
#include <QDebug>
#include <QRadioButton>

hope::hope(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hope)
{
    ui->setupUi(this);
    this->setWindowTitle("Two Layers Heat Calculator");
    QPixmap rzhuman(":/img/img/GreenRzhuman.png");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(rzhuman.scaled(w, h , Qt::KeepAspectRatio));
    ui->radioButtonFinalGraph->setChecked(true);
    ui->radioButtonColdGraph->setChecked(false);
    ui->GraphRes->raise();
    ui->GraphMostCold->lower();

}

hope::~hope()
{
    delete ui;
}

void hope::finalWindow(double lenlowerthen32, const int M, double Xrup, double x1, double x2, double Tmin, double Tmax, double mostcoldtimeXtau, double T, double h) {
    QString TR = QString::number(T);
    if (mostcoldtimeXtau == 0) {
        ui->textEdit->setText("Расчёт успешно завершён! Ни одна точка второго слоя не достигла температуры ниже 305 К (32 °С).");
    } else {
    QString R = QString::number(lenlowerthen32*h);
    QString R1 = QString::number(lenlowerthen32*100/(M - 2 - Xrup));
    QString mostcoldtimeR = QString::number(mostcoldtimeXtau);
    ui->textEdit->setText("Расчёт успешно завершён!\r\n Область второго слоя, нагретая меньше чем на 305 К (32 °С) равна: " + R + " или " + R1 + "% второго слоя");
    ui->labelColdGraph->setText("В момент времени: " + mostcoldtimeR + " мс");
    }
    ui->labelFinalGraph->setText("В момент времени: " + TR + " мс");
    static const int N = M - 2;
    QVector<double> x(N), y(N), xCold(N), yCold(N);
    // Ставим пределы по ОХ и ОY
    double ax=0;
    double bx=x1 + x2;
    double ay, by;
    ay=Tmin - (Tmax-Tmin);
    by=Tmax + (Tmax-Tmin);
    if (ay < 0) {
        ay = 0;
    }
    if (by < 0) {
        by = 0;
    }

    // Пределы раставлены
    QFile heatCoord("heatCoord/heatCoord.txt");
    QString line, xi, yi;
    QTextStream coord(&heatCoord);
    heatCoord.open(QFile::ReadOnly);
    QString searchString1("Final");
    bool found1 = false;
    do {
        line = coord.readLine();
        if (line.contains(searchString1, Qt::CaseSensitive)) {
            found1 = true;
        }
    } while (found1 == false); // Цикл по поиску нужной строки

    for (int i=0; i<N; i++) {
        line = coord.readLine();
        xi = line.left(line.indexOf(';'));
        yi = line.right(line.size() - line.indexOf(';') - 2);
        x[i] = xi.toDouble();
        y[i] = yi.toDouble();
        qDebug() << x[i] << y[i] << line.size() - line.indexOf(';');
    }

    // График на момент заданного времени
        ui->GraphRes->clearGraphs();
        ui->GraphRes->addGraph();
        ui->GraphRes->graph(0)->setData(x, y); // Главный график
        /*QVector<double> xh(2), yh(2);
            xh[0]= 0;
            xh[1]= 60;
            yh[0]= 32;
            yh[1]= 32;
        static const int h = 1;
        ui->GraphRes->graph(h)->setData(xh,yh); // График на y=32, чтобы былло наглядно видно какая часть импланта температурой ниже 32 градусов
        QVector<double> xv(2), yv(2);
            xv[0]= Xrup;
            xv[1]= Xrup;
            yv[0]= 20;
            yv[1]= 40;
        static const int v = 2;
        ui->GraphRes->graph(v)->setData(xv, yv); // График, указфывающий раздел пластин
        */
        ui->GraphRes->xAxis->setLabel("x, мкМ"); // Подпись графика по x
        ui->GraphRes->yAxis->setLabel("t, K"); // Подпись графика по y
        ui->GraphRes->xAxis->setRange(ax, bx); // Пределы графика по x
        ui->GraphRes->yAxis->setRange(ay, by); // Пределы графика по y
        ui->GraphRes->replot(); // Типо заново рисуем
    // конце отрисовки графика на заданное время
    // График наибольшей области температурой меньше 32
        if (mostcoldtimeXtau == 0) {
            ui->labelColdGraph->hide();
            ui->radioButtonColdGraph->hide();
            ui->radioButtonFinalGraph->hide();
            ui->GraphMostCold->hide();
        } else {
        ui->GraphMostCold->clearGraphs();
        QString searchString2("Data with largest second layer area");
        bool found2 = false;
        do {
            line = coord.readLine();
            if (line.contains(searchString2, Qt::CaseSensitive)) {
                found2 = true;
            }
        } while (found2 == false); // Цикл по поиску нужной строки

        for (int i=0; i<N; i++) {
            line = coord.readLine();
            xi = line.left(line.indexOf(';'));
            yi = line.right(line.size() - line.indexOf(';') - 2);
            xCold[i] = xi.toDouble();
            yCold[i] = yi.toDouble();
            qDebug() << x[i] << y[i] << line.size() - line.indexOf(';');
        }

        ui->GraphMostCold->addGraph();
        ui->GraphMostCold->graph(0)->setData(xCold, yCold); // Главный график
        /*QVector<double> xh(2), yh(2);
            xh[0]= 0;
            xh[1]= 60;
            yh[0]= 32;
            yh[1]= 32;
        static const int h = 1;
        ui->GraphMostCold->graph(h)->setData(xh,yh); // График на y=32, чтобы былло наглядно видно какая часть импланта температурой ниже 32 градусов
        QVector<double> xv(2), yv(2);
            xv[0]= Xrup;
            xv[1]= Xrup;
            yv[0]= 20;
            yv[1]= 40;
        static const int v = 2;
        ui->GraphMostCold->graph(v)->setData(xv, yv); // График, указфывающий раздел пластин*/
        ui->GraphMostCold->xAxis->setLabel("x, мкМ"); // Подпись графика по x
        ui->GraphMostCold->yAxis->setLabel("t, K"); // Подпись графика по y
        ui->GraphMostCold->xAxis->setRange(ax, bx); // Пределы графика по x
        ui->GraphMostCold->yAxis->setRange(ay, by); // Пределы графика по y
        ui->GraphMostCold->replot(); // Типо заново рисуем
        }
        heatCoord.close();
     // конце отрисовки графика с наиб областью темп меньше 32
    show();

}

void hope::on_quit_clicked()
{
    close();
}

void hope::on_returntomain_clicked()
{
    MainWindow *w = new MainWindow(this);
    w->show();
    hide();
}


void hope::on_radioButtonColdGraph_toggled(bool checked)
{
    if(checked) {
    ui->radioButtonFinalGraph->setChecked(false);
    ui->GraphMostCold->raise();
    ui->GraphRes->lower();
    }

}

void hope::on_radioButtonFinalGraph_toggled(bool checked)
{
    if(checked) {
    ui->radioButtonColdGraph->setChecked(false);
    ui->GraphRes->raise();
    ui->GraphMostCold->lower();
    }
}
