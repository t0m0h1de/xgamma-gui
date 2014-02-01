/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblTitle;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *phoCity;
    QLabel *phoPeople;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblXgammaT;
    QSlider *hsbXgamma;
    QLabel *lblXgamma;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblXgammaRT;
    QSlider *hsbXgammaR;
    QLabel *lblXgammaR;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblXgammaGT;
    QSlider *hsbXgammaG;
    QLabel *lblXgammaG;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblXgammaBT;
    QSlider *hsbXgammaB;
    QLabel *lblXgammaB;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbSave;
    QPushButton *pbRestor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 410);
        MainWindow->setMinimumSize(QSize(400, 410));
        MainWindow->setMaximumSize(QSize(400, 410));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Computer alt 2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblTitle = new QLabel(centralWidget);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(70, 10, 261, 31));
        lblTitle->setScaledContents(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 361, 31));
        label->setWordWrap(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(23, 375, 91, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 361, 111));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        phoCity = new QLabel(widget);
        phoCity->setObjectName(QStringLiteral("phoCity"));
        phoCity->setPixmap(QPixmap(QString::fromUtf8(":/images/city1.jpg")));
        phoCity->setScaledContents(true);

        horizontalLayout_5->addWidget(phoCity);

        phoPeople = new QLabel(widget);
        phoPeople->setObjectName(QStringLiteral("phoPeople"));
        phoPeople->setPixmap(QPixmap(QString::fromUtf8(":/images/gamma.jpg")));
        phoPeople->setScaledContents(true);

        horizontalLayout_5->addWidget(phoPeople);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(21, 210, 359, 144));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblXgammaT = new QLabel(widget1);
        lblXgammaT->setObjectName(QStringLiteral("lblXgammaT"));
        lblXgammaT->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(lblXgammaT);

        hsbXgamma = new QSlider(widget1);
        hsbXgamma->setObjectName(QStringLiteral("hsbXgamma"));
        hsbXgamma->setMinimum(5);
        hsbXgamma->setMaximum(100);
        hsbXgamma->setValue(50);
        hsbXgamma->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(hsbXgamma);

        lblXgamma = new QLabel(widget1);
        lblXgamma->setObjectName(QStringLiteral("lblXgamma"));
        lblXgamma->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(lblXgamma);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblXgammaRT = new QLabel(widget1);
        lblXgammaRT->setObjectName(QStringLiteral("lblXgammaRT"));
        lblXgammaRT->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(lblXgammaRT);

        hsbXgammaR = new QSlider(widget1);
        hsbXgammaR->setObjectName(QStringLiteral("hsbXgammaR"));
        hsbXgammaR->setMinimum(5);
        hsbXgammaR->setMaximum(100);
        hsbXgammaR->setValue(50);
        hsbXgammaR->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(hsbXgammaR);

        lblXgammaR = new QLabel(widget1);
        lblXgammaR->setObjectName(QStringLiteral("lblXgammaR"));
        lblXgammaR->setMinimumSize(QSize(30, 0));

        horizontalLayout_2->addWidget(lblXgammaR);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblXgammaGT = new QLabel(widget1);
        lblXgammaGT->setObjectName(QStringLiteral("lblXgammaGT"));
        lblXgammaGT->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(lblXgammaGT);

        hsbXgammaG = new QSlider(widget1);
        hsbXgammaG->setObjectName(QStringLiteral("hsbXgammaG"));
        hsbXgammaG->setMinimum(5);
        hsbXgammaG->setMaximum(100);
        hsbXgammaG->setPageStep(10);
        hsbXgammaG->setValue(50);
        hsbXgammaG->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(hsbXgammaG);

        lblXgammaG = new QLabel(widget1);
        lblXgammaG->setObjectName(QStringLiteral("lblXgammaG"));
        lblXgammaG->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(lblXgammaG);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblXgammaBT = new QLabel(widget1);
        lblXgammaBT->setObjectName(QStringLiteral("lblXgammaBT"));
        lblXgammaBT->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(lblXgammaBT);

        hsbXgammaB = new QSlider(widget1);
        hsbXgammaB->setObjectName(QStringLiteral("hsbXgammaB"));
        hsbXgammaB->setMinimum(5);
        hsbXgammaB->setMaximum(100);
        hsbXgammaB->setValue(50);
        hsbXgammaB->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(hsbXgammaB);

        lblXgammaB = new QLabel(widget1);
        lblXgammaB->setObjectName(QStringLiteral("lblXgammaB"));
        lblXgammaB->setMinimumSize(QSize(30, 0));

        horizontalLayout_4->addWidget(lblXgammaB);


        verticalLayout->addLayout(horizontalLayout_4);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(200, 370, 178, 29));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pbSave = new QPushButton(widget2);
        pbSave->setObjectName(QStringLiteral("pbSave"));

        horizontalLayout_6->addWidget(pbSave);

        pbRestor = new QPushButton(widget2);
        pbRestor->setObjectName(QStringLiteral("pbRestor"));

        horizontalLayout_6->addWidget(pbRestor);

        MainWindow->setCentralWidget(centralWidget);
        hsbXgamma->raise();
        hsbXgammaR->raise();
        hsbXgammaB->raise();
        hsbXgammaG->raise();
        lblXgammaT->raise();
        lblXgammaRT->raise();
        lblXgammaBT->raise();
        lblXgammaGT->raise();
        lblXgamma->raise();
        lblXgammaR->raise();
        lblXgammaB->raise();
        lblXgammaG->raise();
        phoCity->raise();
        phoPeople->raise();
        lblTitle->raise();
        label->raise();
        pbRestor->raise();
        pbSave->raise();
        label_2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gamma", 0));
        lblTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Kor Gamma Settings Prog</span></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "Korprog ne help antac screen te chage. See hameic 2c photo, To hameic value te chage, Ended click save.", 0));
        label_2->setText(QApplication::translate("MainWindow", "www.fcsys.us", 0));
        phoCity->setText(QString());
        phoPeople->setText(QString());
        lblXgammaT->setText(QApplication::translate("MainWindow", "Gamma", 0));
        lblXgamma->setText(QApplication::translate("MainWindow", "1.0", 0));
        lblXgammaRT->setText(QApplication::translate("MainWindow", "Red", 0));
        lblXgammaR->setText(QApplication::translate("MainWindow", "1.0", 0));
        lblXgammaGT->setText(QApplication::translate("MainWindow", "Green", 0));
        lblXgammaG->setText(QApplication::translate("MainWindow", "1.0", 0));
        lblXgammaBT->setText(QApplication::translate("MainWindow", "Blue", 0));
        lblXgammaB->setText(QApplication::translate("MainWindow", "1.0", 0));
        pbSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        pbRestor->setText(QApplication::translate("MainWindow", "&Restor", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
