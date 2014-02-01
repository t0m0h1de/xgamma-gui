#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QSettings>
#include <QMessageBox>
#include <ostream>
#include <fstream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_hsbXgamma_valueChanged(int value);

    void on_hsbXgammaR_valueChanged(int value);

    void on_hsbXgammaB_valueChanged(int value);

    void on_hsbXgammaG_valueChanged(int value);

    void on_pbRestor_clicked();

    void on_pbSave_clicked();

private:
    Ui::MainWindow *ui;
    int prevXgammaPosi;
    int SysGammaR;
    int SysGammaG;
    int SysGammaB;
    QSettings *rgbgammaconf;
};

#endif // MAINWINDOW_H
