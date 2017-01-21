#include <QtGui>
#include "visao.h"
#include "ui_visao.h"


visao::visao() : QMainWindow() 
{
    ui.setupUi(this);
    this->show();

    connect(ui.rot_X, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setXRotation(int)));
    connect(ui.rot_X, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setXRotation(int)));
    connect(ui.glWidget1, SIGNAL(xRotationChanged(int)), ui.rot_X, SLOT(setValue(int)));
    connect(ui.glWidget2, SIGNAL(xRotationChanged(int)), ui.rot_X, SLOT(setValue(int)));
    
    connect(ui.rot_Y, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setYRotation(int)));
    connect(ui.rot_Y, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setYRotation(int)));
    connect(ui.glWidget1, SIGNAL(yRotationChanged(int)), ui.rot_Y, SLOT(setValue(int)));
    connect(ui.glWidget2, SIGNAL(yRotationChanged(int)), ui.rot_Y, SLOT(setValue(int)));
    
    connect(ui.rot_Z, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setZRotation(int)));
    connect(ui.rot_Z, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setZRotation(int)));
    connect(ui.glWidget1, SIGNAL(zRotationChanged(int)), ui.rot_Z, SLOT(setValue(int)));
    connect(ui.glWidget2, SIGNAL(zRotationChanged(int)), ui.rot_Z, SLOT(setValue(int)));
    
    connect(ui.FatorEsc, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setEscala(int)));
    connect(ui.FatorEsc, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setEscala(int)));

    connect(ui.DistFoc, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setDistFocal(int))); 
    connect(ui.DistFoc, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setDistFocal(int)));
    
    connect(ui.trs_X, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setXTraslado(int)));
    connect(ui.trs_X, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setXTraslado(int)));
    
    connect(ui.trs_Y, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setYTraslado(int)));
    connect(ui.trs_Y, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setYTraslado(int)));
    
    connect(ui.trs_Z, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setZTraslado(int)));
    connect(ui.trs_Z, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setZTraslado(int)));
    
    connect(ui.ct_X, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setXCentro(int)));
    connect(ui.ct_X, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setXCentro(int)));
    
    connect(ui.ct_Y, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setYCentro(int)));
    connect(ui.ct_Y, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setYCentro(int)));
    
    connect(ui.ct_Z, SIGNAL(valueChanged(int)), ui.glWidget1, SLOT(setZCentro(int)));
    connect(ui.ct_Z, SIGNAL(valueChanged(int)), ui.glWidget2, SLOT(setZCentro(int)));
     
    connect(ui.actionSair, SIGNAL(triggered()), this, SLOT(Salida()));
    connect(ui.BSair, SIGNAL(pressed()), this, SLOT(Salida())); 
    connect(ui.BZerar, SIGNAL(pressed()), this, SLOT(Zerar()));

    ui.glWidget2->setBand(1);
}

void visao::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Escape)
        close();
    else
        QWidget::keyPressEvent(e);
}


void visao::Zerar()
{
 ui.DistFoc->setValue(60);
 ui.rot_X->setValue(0);
 ui.rot_Y->setValue(0);
 ui.rot_Z->setValue(0);
 ui.ct_X->setValue(0);
 ui.ct_Y->setValue(0);
 ui.ct_Z->setValue(0);
 ui.trs_X->setValue(0);
 ui.trs_Y->setValue(0);
 ui.trs_Z->setValue(0);
 
} 

void visao::Salida()
{
 int resp;
 
 resp = QMessageBox::question(this, tr("Camera parameters"), tr("Are you sure?"),QMessageBox::Yes | QMessageBox::No);
 
 if(resp==QMessageBox::Yes)
   this->close();  
}

