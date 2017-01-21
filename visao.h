#ifndef VISAO_H
#define VISAO_H

#include <QtGui>
#include "ui_visao.h"

QT_BEGIN_NAMESPACE
class QSlider;
QT_END_NAMESPACE

class GLWidget;

class visao : public QMainWindow {
       Q_OBJECT
       public:
               visao();

       protected:
               void keyPressEvent(QKeyEvent *event);
       private:
               Ui::visao ui;

               GLWidget *glWidget;
               
       private slots:
               void Zerar();
               void Salida();
};             

#endif


