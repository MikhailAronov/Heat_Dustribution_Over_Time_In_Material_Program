#include "bodyofcalculation.h"
#include "ui_bodyofcalculation.h"
#include <QFile>
#include <QDebug>

BodyOfCalculation::BodyOfCalculation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BodyOfCalculation)
{
    ui->setupUi(this);
    final = new hope();
    connect(this, SIGNAL(ShowResult(double, const int, double, double, double, double, double, double, double, double)),
            final, SLOT(finalWindow(double, const int, double, double, double, double, double, double, double, double)));
}

BodyOfCalculation::~BodyOfCalculation()
{
    delete ui;
}


void BodyOfCalculation::HeatCalculation(double kM_van, double cM_van, double dM_van, double x1, double T01_van,
                                        double ki_van, double ci_van, double di_van, double x2, double T02_van, double T_van,
                                        double kW_van, double cW_van, double dW_van, double T0W_van, bool Env, double tau_van, bool tmStep, double h_van, bool cdStep) {

    double h, tau, X, A[3], C[3], B[3], F[3], x32min, x32max, lenlowerthen32, mostcoldtime, Tmax, Tmin;
    double kM, ki, kW, cM, ci, cW, dM, di, dW, T01, T02, T0W;
    int j, Xrup, X_start, X_end;
    X=x1+x2;
    T01=T01_van/T01_van;
    T02=T02_van/T01_van;
    int N;
    if (Env == true) {
        X_start = 10;
        X_end = 10;
        if (cdStep == true) {
            h=h_van/X;
            N=(X/h_van) + 2 + X_start + X_end;
        } else {
            N=250;
            h=double(1)/N;
            N= N + X_start + X_end;
            h_van=h*X;
        }
        Xrup=int(x1/h_van + X_start);
    } else {
        if (cdStep == true) {
            h=h_van/X;
            N=(X/h_van) + 2;
        } else {
            N=252;
            h=double(1)/(N-2);
            h_van=h*X;
        }
        Xrup=int(x1/h_van + 1);
    }


    if (tmStep == true) {
        tau=tau_van/T_van;
    } else {
        tau=double(1)/5000000;
        tau_van=tau*T_van;
    }
    //DAMN_SON_ITS_SAVE_CHECK
    std::vector<double> alpha(N);
    std::vector<double> beta(N);
    std::vector<double> U(N);
    std::vector<double> Umaxcold(N);

    //initial conditions
    if (Env == true) {
        T0W=T0W_van/T01_van;
        for(int i=0; i<N; i++) {
            if (i<X_start) {
                U[i]=T0W;
            } else if (i==X_start) {
                U[i]=(T0W+T01)/2;
            } else if ((i<Xrup)&&(i>X_start)) {
                U[i]=T01;
            } else if (i==Xrup) {
                U[i]=(T01+T02)/2;
            } else if ((i>Xrup)&&(i<(N-X_end))) {
                U[i]=T02;
            } else if (i==(N-X_end)) {
                U[i]=(T0W+T02)/2;
            } else if ((i>(N-X_end))&&(i<N)) {
                U[i]=T0W;
            }
        }
    } else if (Env == false) {
            for(int i=0; i<N; i++) {
                if (i<Xrup) {
                    U[i]=T01;
                } else if (i==Xrup) {
                    U[i]=(T01+T02)/2;
                } else if (i>Xrup) {
                    U[i]=T02;
            }
        }
    }
    //initial conditions end

    //border conditions
    if (Env == false) {
        alpha[0]=1;
        beta[0]=0;
        kM=kM_van/(kM_van + ki_van)*2;
        ki=ki_van/(kM_van + ki_van)*2;
        cM=cM_van/(kM_van + ki_van)*2;
        ci=ci_van/(kM_van + ki_van)*2;
        dM=dM_van*X/T_van*X; // Хитропопо умножаю на Х потом на Т, а потом еще раз умножаю на Х чтобы избежать проблем с очень маленькими числами
        di=di_van*X/T_van*X;
        qDebug() <<"kM"<< kM;
        qDebug() <<"cM"<< cM;
        qDebug() <<"dM"<< dM;
        qDebug() <<"x1"<< x1;
        qDebug() <<"T01"<< T01;
        qDebug() <<"ki"<< ki;
        qDebug() <<"ci"<< ci;
        qDebug() <<"di"<< di;
        qDebug() <<"x2"<< x2;
        qDebug() <<"T02"<< T02;
        qDebug() <<"T_van"<< T_van;
        qDebug() <<"Xrup"<< Xrup;
        qDebug() <<"h_van"<< h_van;
        qDebug() <<"h"<< h;
        qDebug() <<"tau_van"<< tau_van;
        qDebug() <<"tau"<< tau;
        qDebug() <<"N"<< N;
        qDebug() <<"Env"<< Env;
        qDebug() <<"Env"<< Env;
        //Definition of sweep coefficients
        //A[0]=kM/(h*h); C[0]=kM/(h*h); B[0]=2*kM/(h*h) + dM*cM/tau; F[0]=-dM*cM/tau;
        //A[1]=ki/(h*h); C[1]=ki/(h*h); B[1]=2*ki/(h*h) + di*ci/tau; F[1]=-di*ci/tau;
        //Definition of sweep coefficients end
    } else {
        alpha[0]=0; //- For environment situation
        beta[0]=T0W;
        kM=kM_van/(kM_van + ki_van + kW_van)*3;
        ki=ki_van/(kM_van + ki_van + kW_van)*3;
        kW=kW_van/(kM_van + ki_van + kW_van)*3;
        cM=cM_van/(kM_van + ki_van + kW_van)*3;
        ci=ci_van/(kM_van + ki_van + kW_van)*3;
        cW=cW_van/(kM_van + ki_van + kW_van)*3;
        dM=dM_van*X/T_van*X;
        di=di_van*X/T_van*X;
        dW=dW_van*X/T_van*X;
        A[2]=kW/(h*h); C[2]=kW/(h*h); B[2]=2*kW/(h*h) + dW*cW/tau; F[2]=-dW*cW/tau;
        qDebug() << kM;
        qDebug() << cM;
        qDebug() << dM;
        qDebug() << x1;
        qDebug() << T01;
        qDebug() << ki;
        qDebug() << ci;
        qDebug() << di;
        qDebug() << x2;
        qDebug() << T02;
        qDebug() << T_van;
        qDebug() << kW;
        qDebug() << cW;
        qDebug() << dW;
        qDebug() << T0W;
        qDebug() << Xrup;
        qDebug() << h_van;
        qDebug() << Env;
        //Definition of sweep coefficients
        //A[0]=kM/(h*h); C[0]=kM/(h*h); B[0]=2*kM/(h*h) + dM*cM/tau; F[0]=-dM*cM/tau;
        //A[1]=ki/(h*h); C[1]=ki/(h*h); B[1]=2*ki/(h*h) + di*ci/tau; F[1]=-di*ci/tau;
        //A[2]=kW/(h*h); C[2]=kW/(h*h); B[2]=2*kW/(h*h) + dW*cW/tau; F[2]=-dW*cW/tau;
        //Definition of sweep coefficients end
    }
    //border conditions end
    A[0]=kM/(h*h); C[0]=kM/(h*h); B[0]=2*kM/(h*h) + dM*cM/tau; F[0]=-dM*cM/tau;
    A[1]=ki/(h*h); C[1]=ki/(h*h); B[1]=2*ki/(h*h) + di*ci/tau; F[1]=-di*ci/tau;
    //Definition of sweep coefficients
    //Definition of sweep coefficients end

    //file creation and record opening
    QDir().mkpath("heatCoord");
    QFile heatCoord("heatCoord/heatCoord.txt");
    QTextStream in(&heatCoord);
    heatCoord.open(QFile::WriteOnly);
    in <<"K1 = "<<kM_van<<" W/M/K;  C1 = "<<cM_van<<" J/K;  d1 = "<<dM_van<<" Kg/M^3;  L1 = "<<x1<<" microM;  T01 = "<<T01_van<<" K;\r\n";
    in <<"K2 = "<<ki_van<<" W/M/K;  C2 = "<<ci_van<<" J/K;  d2 = "<<di_van<<" Kg/M^3;  L2 = "<<x2<<" microM;  T02 = "<<T02_van<<" K;\r\n";
    if (Env == true) {
        in <<"Kenv = "<<kW_van<<" W/M/K;  C2 = "<<cW_van<<" J/K;  d2 = "<<dW_van<<" Kg/M^3;  T02 = "<<T0W_van<<" K;\r\n";
    }
    heatCoord.write("format: x; U(x)\r\n");
    //file creation and record opening end
    qDebug() << Env;
    //forAllTime
    j=0; mostcoldtime=0; lenlowerthen32=0;
    while (j<=double(1)/tau) {
        j++; x32max=Xrup; x32min=N-2;
        //forOneTime
        if (Env == true) {
            for (int i=1; i<N-1; i++) {
                if (i<X_start) {
                    alpha[i]=A[2]/(B[2] - C[2]*alpha[i-1]);
                    beta[i]=(C[2]*beta[i-1] - F[2]*U[i])/(B[2] - C[2]*alpha[i-1]);
                } else if (i==X_start) {
                    alpha[i]=kM/(kM + kW*(1-alpha[i-1]));
                    beta[i]=kW*beta[i-1]/(kM + kW*(1-alpha[i-1]));
                } else if ((i<Xrup)&&(i>X_start)) {
                    alpha[i]=A[0]/(B[0] - C[0]*alpha[i-1]);
                    beta[i]=(C[0]*beta[i-1] - F[0]*U[i])/(B[0] - C[0]*alpha[i-1]);
                } else if (i==Xrup) {
                    alpha[i]=ki/(ki + kM*(1-alpha[i-1]));
                    beta[i]=kM*beta[i-1]/(ki + kM*(1-alpha[i-1]));
                } else if ((i>Xrup)&&(i<(N - X_end))) {
                    alpha[i]=A[1]/(B[1] - C[1]*alpha[i-1]);
                    beta[i]=(C[1]*beta[i-1] - F[1]*U[i])/(B[1] - C[1]*alpha[i-1]);
                } else if (i==(N - X_end)) {
                    alpha[i]=kW/(kW + ki*(1-alpha[i-1]));
                    beta[i]=ki*beta[i-1]/(kW + ki*(1-alpha[i-1]));
                } else if (i>(N - X_end)) {
                    alpha[i]=A[2]/(B[2] - C[2]*alpha[i-1]);
                    beta[i]=(C[2]*beta[i-1] - F[2]*U[i])/(B[2] - C[2]*alpha[i-1]);
                }
            }
        } else if (Env == false) {
            for (int i=1; i<N-1; i++) {
                if (i<Xrup) {
                    alpha[i]=A[0]/(B[0] - C[0]*alpha[i-1]);
                    beta[i]=(C[0]*beta[i-1] - F[0]*U[i])/(B[0] - C[0]*alpha[i-1]);
                } else if (i==Xrup) {
                    alpha[i]=ki/(ki + kM*(1-alpha[i-1]));
                    beta[i]=kM*beta[i-1]/(ki + kM*(1-alpha[i-1]));
                } else if (i>Xrup) {
                    alpha[i]=A[1]/(B[1] - C[1]*alpha[i-1]);
                    beta[i]=(C[1]*beta[i-1] - F[1]*U[i])/(B[1] - C[1]*alpha[i-1]);
                }
            }
        }
        if (Env == false) {
            U[N-1]=beta[N-2]/(1-alpha[N-2]);
        } else if (Env == true) {
            U[N-1]=T0W;
        }
        for (int i=(N-1); i>0; i--) {
            U[i-1]=alpha[i-1]*U[i] + beta[i-1];
        }
        if (Env == true) {
            x32max=Xrup; x32min=N-X_end;
            for (int i=(Xrup); i<(N-X_end); i++) {
                if ((U[i]<305/T01_van)&&(i<x32min)) {
                    x32min=i;
                }
                if ((U[i]<305/T01_van)&&(i>x32max)) {
                    x32max=i;
                }

            }

            if ((x32max-x32min)>lenlowerthen32) {
                lenlowerthen32=(x32max-x32min);
                mostcoldtime=j;
                for (int i=0; i<N; i++) {
                    Umaxcold[i]=U[i];
                    }
            }
        } else {
            for (int i=(Xrup); i<(N-1); i++) {
                if ((U[i]<305/T01_van)&&(i<x32min)) {
                    x32min=i;
                }
                if ((U[i]<305/T01_van)&&(i>x32max)) {
                    x32max=i;
                }

            }

            if ((x32max-x32min)>lenlowerthen32) {
                lenlowerthen32=(x32max-x32min);
                mostcoldtime=j;
                for (int i=0; i<N; i++) {
                    Umaxcold[i]=U[i];
                    }
            }
        }

        //forOneTime end
        //forOneTime recording
        if (Env ==true) {
            if (j==100 || j==1000 || j==10000 || j==50000 || j==100000 || j==200000 || j==300000 || j==500000 || j==1000000 || j==1500000 || j==2000000 || j==4000000) {
                    in <<"Data for time t[us]="<<j*tau_van*1000<< "\r\n";
                for (int i=X_start; i<=(N - X_end); i++) {
                    in <<(i-X_start)*h_van*1000000<<"; "<<U[i]*T01_van<<"\r\n";
                }
            }
        } else {
            if (j==100 || j==1000 || j==10000 || j==50000 || j==100000 || j==200000 || j==300000 || j==500000 || j==1000000 || j==1500000 || j==2000000 || j==4000000) {
                    in <<"Data for time t[us]="<<j*tau_van*1000<< "\r\n";
                for (int i=1; i<=(N-1); i++) {
                    in <<(i-1)*h_van*1000000<<"; "<<U[i]*T01_van<<"\r\n";
                }
            }
        }
        //forOneTime recording end
    }

    //Tmax and Tmin searching
    if (Env == true) {
        if (T01 >= T02) {
            if (T01 >= T0W) {
                Tmax = T01;
                if (T02 >= T0W) {
                    Tmin = T0W;
                } else {
                    Tmin = T02;
                }
            } else  {
                Tmax = T0W;
                Tmin = T02;
            }
        } else  {
            if (T02 >= T0W) {
                Tmax = T02;
                if (T01 >= T0W) {
                    Tmin = T0W;
                } else {
                    Tmin=T01;
                }
            } else {
                Tmax = T0W;
                Tmin = T01;
            }
        }
    } else if (Env == false) {
        if (T01 >= T02) {
            Tmax=T01;
            Tmin=T02;
        } else {
            Tmax=T02;
            Tmin=T01;
        }
    }
    //Tmax and Tmin searching end

    in <<"---------------------------------------"<<"\r\n";
    in <<"Final data for time t[us]="<<T_van*1000<<"\r\n";
    if (Env == true) {
        for (int i=X_start; i<=(N - X_end); i++) {
                in <<(i-X_start)*h_van*1000000<<"; "<<U[i]*T01_van<<"\r\n";
            }
    } else {
        for (int i=1; i<=(N-1); i++) {
                in <<(i-1)*h_van*1000000<<"; "<<U[i]*T01_van<<"\r\n";
            }
    }
    in <<"---------------------------------------"<<"\r\n";
    in <<"Data with largest second layer area with a temperature less than 32 degrees for time t[us]="<<mostcoldtime*tau_van*1000<<"\r\n";
    if (Env == true) {
        for (int i=X_start; i<=(N - X_end); i++) {
                in <<(i-X_start)*h_van*1000000<<"; "<<Umaxcold[i]*T01_van<<"\r\n";
            }
        in <<"Second layer area with a temperature less than 32 degrees is "<<(lenlowerthen32)*h_van*1000000<<" or "<<lenlowerthen32*100/(N + 1 - Xrup - X_end)<<"% of second layer"<<"\r\n";
    } else {
        for (int i=1; i<=(N-1); i++) {
                in <<(i-1)*h_van*1000000<<"; "<<Umaxcold[i]*T01_van<<"\r\n";
            }
        in <<"Second layer area with a temperature less than 32 degrees is "<<(lenlowerthen32)*h_van*1000000<<" or "<<lenlowerthen32*100/(N - Xrup)<<"% of second layer"<<"\r\n";
    }
    in <<"---------------------------------------"<<"\r\n";
    heatCoord.close();
if (Env == true) {
    emit ShowResult(lenlowerthen32, N-X_end, Xrup+1, x1*1000000, x2*1000000, Tmin*T01_van, Tmax*T01_van, mostcoldtime*tau_van*1000, T_van*1000, h_van*1000000);
} else {
    emit ShowResult(lenlowerthen32, N, Xrup, x1*1000000, x2*1000000, Tmin*T01_van, Tmax*T01_van, mostcoldtime*tau_van*1000, T_van*1000, h_van*1000000);
}
}
