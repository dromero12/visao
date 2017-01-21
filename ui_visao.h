/********************************************************************************
** Form generated from reading UI file 'visao.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISAO_H
#define UI_VISAO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_visao
{
public:
    QAction *actionSair;
    QWidget *centralWidget;
    QPushButton *BZerar;

    GLWidget *glWidget1;
    GLWidget *glWidget2;

    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QSpinBox *ct_X;
    QSpinBox *ct_Z;
    QSpinBox *ct_Y;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_14;
    QSpinBox *FatorEsc;
    QLabel *label_3;
    QSpinBox *trs_X;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *trs_Z;
    QSpinBox *trs_Y;
    QLabel *label_11;
    QGroupBox *groupBox;
    QSlider *rot_X;
    QSlider *rot_Y;
    QSlider *rot_Z;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_12;
    QScrollArea *ScrollArea1;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *ScrollArea2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *BSair;
    QSlider *DistFoc;
    QLabel *label_9;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *visao)
    {
        if (visao->objectName().isEmpty())
            visao->setObjectName(QString::fromUtf8("visao"));
        visao->setWindowModality(Qt::ApplicationModal);
        visao->resize(872, 768);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(123, 156, 193, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        visao->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        visao->setWindowIcon(icon);
        actionSair = new QAction(visao);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSair->setIcon(icon);
        centralWidget = new QWidget(visao);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BZerar = new QPushButton(centralWidget);
        BZerar->setObjectName(QString::fromUtf8("BZerar"));
        BZerar->setGeometry(QRect(777, 600, 80, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        BZerar->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(302, 11, 281, 41));
        QFont font1;
        font1.setPointSize(22);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(31, 506, 211, 30));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(372, 41, 141, 31));
        QFont font3;
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 566, 101, 15));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 624, 111, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 686, 101, 15));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(450, 556, 71, 15));
        ct_X = new QSpinBox(centralWidget);
        ct_X->setObjectName(QString::fromUtf8("ct_X"));
        ct_X->setGeometry(QRect(190, 614, 51, 31));
        ct_X->setMinimum(-10);
        ct_X->setMaximum(10);
        ct_Z = new QSpinBox(centralWidget);
        ct_Z->setObjectName(QString::fromUtf8("ct_Z"));
        ct_Z->setGeometry(QRect(350, 614, 51, 31));
        ct_Z->setMinimum(-10);
        ct_Z->setMaximum(10);
        ct_Y = new QSpinBox(centralWidget);
        ct_Y->setObjectName(QString::fromUtf8("ct_Y"));
        ct_Y->setGeometry(QRect(270, 614, 51, 31));
        ct_Y->setMinimum(-10);
        ct_Y->setMaximum(10);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 624, 21, 15));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_6->setFont(font4);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(250, 624, 21, 15));
        label_13->setFont(font4);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(330, 624, 21, 15));
        label_14->setFont(font4);
        FatorEsc = new QSpinBox(centralWidget);
        FatorEsc->setObjectName(QString::fromUtf8("FatorEsc"));
        FatorEsc->setGeometry(QRect(190, 671, 51, 31));
        FatorEsc->setMinimum(-10);
        FatorEsc->setMaximum(10);
        FatorEsc->setValue(1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(452, 506, 211, 30));
        label_3->setFont(font2);
        trs_X = new QSpinBox(centralWidget);
        trs_X->setObjectName(QString::fromUtf8("trs_X"));
        trs_X->setGeometry(QRect(567, 544, 51, 31));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(627, 554, 21, 15));
        label_15->setFont(font4);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(707, 554, 21, 15));
        label_16->setFont(font4);
        trs_Z = new QSpinBox(centralWidget);
        trs_Z->setObjectName(QString::fromUtf8("trs_Z"));
        trs_Z->setGeometry(QRect(727, 544, 51, 31));
        trs_Y = new QSpinBox(centralWidget);
        trs_Y->setObjectName(QString::fromUtf8("trs_Y"));
        trs_Y->setGeometry(QRect(647, 544, 51, 31));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(547, 554, 21, 15));
        label_11->setFont(font4);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(454, 592, 301, 111));
        rot_X = new QSlider(groupBox);
        rot_X->setObjectName(QString::fromUtf8("rot_X"));
        rot_X->setGeometry(QRect(30, 20, 251, 20));
        rot_X->setMinimum(0);
        rot_X->setMaximum(5760);
        rot_X->setSingleStep(16);
        rot_X->setPageStep(240);
        rot_X->setOrientation(Qt::Horizontal);
        rot_X->setTickPosition(QSlider::TicksBelow);
        rot_X->setTickInterval(240);
        rot_Y = new QSlider(groupBox);
        rot_Y->setObjectName(QString::fromUtf8("rot_Y"));
        rot_Y->setGeometry(QRect(30, 50, 251, 20));
        rot_Y->setMinimum(0);
        rot_Y->setMaximum(5760);
        rot_Y->setSingleStep(16);
        rot_Y->setPageStep(240);
        rot_Y->setOrientation(Qt::Horizontal);
        rot_Y->setTickPosition(QSlider::TicksBelow);
        rot_Y->setTickInterval(240);
        rot_Z = new QSlider(groupBox);
        rot_Z->setObjectName(QString::fromUtf8("rot_Z"));
        rot_Z->setGeometry(QRect(30, 80, 251, 20));
        rot_Z->setMinimum(0);
        rot_Z->setMaximum(5760);
        rot_Z->setSingleStep(16);
        rot_Z->setPageStep(240);
        rot_Z->setOrientation(Qt::Horizontal);
        rot_Z->setTickPosition(QSlider::TicksBelow);
        rot_Z->setTickInterval(240);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 80, 21, 20));
        label_17->setFont(font4);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 50, 21, 20));
        label_18->setFont(font4);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 21, 20));
        label_12->setFont(font4);
        ScrollArea1 = new QScrollArea(centralWidget);
        ScrollArea1->setObjectName(QString::fromUtf8("ScrollArea1"));
        ScrollArea1->setGeometry(QRect(30, 90, 400, 400));
        ScrollArea1->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 396, 396));

        glWidget1 = new GLWidget(scrollAreaWidgetContents);
        glWidget1->setObjectName(QString::fromUtf8("glWidget1"));
        glWidget1->setGeometry(QRect(0, 0, 400, 400));


        ScrollArea1->setWidget(scrollAreaWidgetContents);
        ScrollArea2 = new QScrollArea(centralWidget);
        ScrollArea2->setObjectName(QString::fromUtf8("ScrollArea2"));
        ScrollArea2->setGeometry(QRect(452, 90, 400, 400));
        ScrollArea2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 396, 396));

        glWidget2 = new GLWidget(scrollAreaWidgetContents_2);
        glWidget2->setObjectName(QString::fromUtf8("glWidget2"));
        glWidget2->setGeometry(QRect(0, 0, 400, 400));

        ScrollArea2->setWidget(scrollAreaWidgetContents_2);
        BSair = new QPushButton(centralWidget);
        BSair->setObjectName(QString::fromUtf8("BSair"));
        BSair->setGeometry(QRect(777, 680, 80, 25));
        QFont font5;
        font5.setPointSize(8);
        BSair->setFont(font5);
        DistFoc = new QSlider(centralWidget);
        DistFoc->setObjectName(QString::fromUtf8("DistFoc"));
        DistFoc->setGeometry(QRect(170, 560, 231, 20));
        DistFoc->setMinimum(5);
        DistFoc->setMaximum(104);
        DistFoc->setValue(60);
        DistFoc->setOrientation(Qt::Horizontal);
        DistFoc->setTickPosition(QSlider::TicksBelow);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(169, 580, 52, 14));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(365, 580, 52, 14));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(169, 546, 21, 16));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(375, 546, 31, 16));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(289, 546, 31, 16));
        visao->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(visao);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 872, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        visao->setMenuBar(menuBar);
        statusBar = new QStatusBar(visao);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        visao->setStatusBar(statusBar);
        QWidget::setTabOrder(ScrollArea1, ScrollArea2);
        QWidget::setTabOrder(ScrollArea2, ct_X);
        QWidget::setTabOrder(ct_X, ct_Y);
        QWidget::setTabOrder(ct_Y, ct_Z);
        QWidget::setTabOrder(ct_Z, FatorEsc);
        QWidget::setTabOrder(FatorEsc, trs_X);
        QWidget::setTabOrder(trs_X, trs_Y);
        QWidget::setTabOrder(trs_Y, trs_Z);
        QWidget::setTabOrder(trs_Z, BZerar);
        QWidget::setTabOrder(BZerar, BSair);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);

        retranslateUi(visao);

        QMetaObject::connectSlotsByName(visao);
    } // setupUi

    void retranslateUi(QMainWindow *visao)
    {
        visao->setWindowTitle(QApplication::translate("visao", "Camera parameters - Main", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("visao", "Exit", 0, QApplication::UnicodeUTF8));
        BZerar->setText(QApplication::translate("visao", "Clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("visao", "Camera parameters", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("visao", "Intrinsic camera parameters", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("visao", "3D Visualization", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("visao", "Focal distance:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("visao", "Image center:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("visao", "Scale factor:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("visao", "Translation:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("visao", "X:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("visao", "Y:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("visao", "Z:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("visao", "Extrinsic camera parameters", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("visao", "Y:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("visao", "Z:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("visao", "X:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("visao", "Rotation (0,360\302\260)", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("visao", "Z:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("visao", "Y:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("visao", "X:", 0, QApplication::UnicodeUTF8));
        BSair->setText(QApplication::translate("visao", "Exit", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("visao", "500 mm", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("visao", "17mm", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("visao", "5\302\260", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("visao", "104\302\260", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("visao", "60\302\260", 0, QApplication::UnicodeUTF8));
        menuArquivo->setTitle(QApplication::translate("visao", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class visao: public Ui_visao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISAO_H
