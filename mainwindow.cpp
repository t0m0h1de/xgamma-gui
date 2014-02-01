#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    prevXgammaPosi=50;  //Jen je teste
    SysGammaR=SysGammaG=SysGammaB=50; //Iniz

    rgbgammaconf = new QSettings("xgammagui.conf",QSettings::IniFormat); //Gamma value te save path

    // Inzi gammac value calla file.
    SysGammaR=rgbgammaconf->value("rgamma").toInt();
    SysGammaG=rgbgammaconf->value("ggamma").toInt();
    SysGammaB=rgbgammaconf->value("bgamma").toInt();

    // Inzi UIc gammac value
    if(SysGammaR==SysGammaB&&SysGammaR==SysGammaG&&SysGammaB==SysGammaG)
    {
        ui->hsbXgamma->setValue(5);
        ui->hsbXgamma->setValue(SysGammaR);
    }
    else
    {
        ui->hsbXgammaR->setValue(SysGammaR);
        ui->hsbXgammaG->setValue(SysGammaG);
        ui->hsbXgammaB->setValue(SysGammaB);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_hsbXgamma_valueChanged(int value)
{
    // RGB Gamma te Echi chage.
    ui->hsbXgammaR->setValue(ui->hsbXgammaR->value()-(prevXgammaPosi-value));
    ui->hsbXgammaB->setValue(ui->hsbXgammaB->value()-(prevXgammaPosi-value));
    ui->hsbXgammaG->setValue(ui->hsbXgammaG->value()-(prevXgammaPosi-value));

    // RGB Gammac value te chage to show.
    ui->lblXgamma->setText(QString::number(value*0.02));
    ui->lblXgammaR->setText(QString::number(ui->hsbXgammaR->value()*0.02));
    ui->lblXgammaG->setText(QString::number(ui->hsbXgammaG->value()*0.02));
    ui->lblXgammaB->setText(QString::number(ui->hsbXgammaB->value()*0.02));

    // Kortimec Xgamma position hi previous te stor.
    prevXgammaPosi=value;
}

void MainWindow::on_hsbXgammaR_valueChanged(int value)
{
    // Kif R to G to Bc value hi eyo no, Xgamma te enable no.
    // User hi sometime te zenbooc RBG value te chage, Sou kor code te notere.
    /*if((value!=ui->hsbXgammaG->value())||(value!=ui->hsbXgammaB->value()))
    {
        ui->hsbXgamma->setEnabled(false);
        ui->lblXgamma->setEnabled(false);
    }
    else
    {
        ui->hsbXgamma->setEnabled(true);
        ui->lblXgamma->setEnabled(true);
    }*/

    // Rc value te show.
    ui->lblXgammaR->setText(QString::number(value*0.02));

    // Korvalue hi system te chage to save je kortime.
    QProcess::execute("xgamma -rgamma "+QString::number(value*0.02));

    // Korvalue hi userc dir te save.
    rgbgammaconf->setValue("rgamma",QString::number(value));
}

void MainWindow::on_hsbXgammaB_valueChanged(int value)
{
    // Bc value te show.
    ui->lblXgammaB->setText(QString::number(value*0.02));

    // Korvalue hi system te chage to save je kortime.
    QProcess::execute("xgamma -bgamma "+QString::number(value*0.02));

    // Korvalue hi userc dir te save.
    rgbgammaconf->setValue("bgamma",QString::number(value));
}

void MainWindow::on_hsbXgammaG_valueChanged(int value)
{
    // Gc value te show.
    ui->lblXgammaG->setText(QString::number(value*0.02));

    // Korvalue hi system te chage to save je kortime.
    QProcess::execute("xgamma -ggamma "+QString::number(value*0.02));

    // Korvalue hi userc dir te save.
    rgbgammaconf->setValue("ggamma",QString::number(value));
}

void MainWindow::on_pbRestor_clicked()
{
    // RGB Gamma te Echi chage.
    ui->hsbXgamma->setValue(5);
    ui->hsbXgamma->setValue(50);
    string path(getenv("HOME"));
    path += "/.config/autostart/xgammaset.desktop";
    string syscmd="rm -rf ";
    syscmd += path;
    system(syscmd.c_str());
    QMessageBox::information(NULL,"Systemc Mesegi","Antac systemc Gamma hi zenkon restorre!");
}

void MainWindow::on_pbSave_clicked()
{
    ofstream file1;
    string path(getenv("HOME"));
    path += "/.config/autostart/xgammaset.desktop";
    file1.open(path.c_str());
    file1<<"[Desktop Entry]\nType=Application\nEncoding=UTF-8\nVersion=1.0\nName=XGammaSet\nComment=XGammaSet\nExec=sh -c \"sleep 10 && xgamma -rgamma "+QString::number(ui->hsbXgammaR->value()*0.02).toStdString()+" -ggamma "+QString::number(ui->hsbXgammaG->value()*0.02).toStdString()+" -bgamma "+QString::number(ui->hsbXgammaB->value()*0.02).toStdString()+"\"\nX-GNOME-Autostart-enabled=true";
    file1.close();
    string syscmd="chmod +x ";
    syscmd += path;
    system(syscmd.c_str());
    QMessageBox::information(NULL,"Systemc Mesegi","Antac systemc Gamma hi zenkon savere, Hatsu system te login hi chage!");
}
