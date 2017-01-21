#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
    GLWidget(QWidget *parent = 0);
    ~GLWidget();

    QSize minimumSizeHint() const;
    QSize sizeHint() const;

public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void setEscala(int valor);
    void setXTraslado(int valor);
    void setYTraslado(int valor);
    void setZTraslado(int valor);
    void setXCentro(int valor);
    void setYCentro(int valor);
    void setZCentro(int valor);
    void setDistFocal(int valor);
    void setBand(int band);

signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);
    void z_valor(int valor);
    void y_valor(int valor);
    void x_valor(int valor);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    
    int xRot, yRot, zRot, Aux;
    int vRotAct_x, vRotAct_y, vRotAct_z;     
    int vEsc;
    int vDFoc;
    int xTrs, yTrs, zTrs;
    int xCt, yCt, zCt;    
    int BandViewPort2;
    
    QPoint lastPos;
    QColor qtGreen;
    QColor qtPurple;
    QColor qtBlack;
    QColor qtRed;

};

#endif
