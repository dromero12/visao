 #include <QtGui>
#include <QtOpenGL>

#include <GL/glut.h>
#include <math.h>

#include "glwidget.h"

GLfloat light_ambiente[] = {2.0, 2.0, 2.0, 1.0};  
GLfloat light_Position_a[] = {10.0, 0.0, 10.0, 1.0};

GLfloat light_difusa[] = {1, 1, 1, 1.0}; 
GLfloat light_Position_d1[] = {0.0, 5.0, -20.0, 1.0};
GLfloat light_Position_d2[] = {-30.0, -30.0, 50.0, 1.0};

//**************************************************************************

GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{
    xRot = 0; yRot = 0; zRot = 0;
    
    vEsc = 0;
    vDFoc = 60;
    
    xTrs = 0; yTrs = 0; zTrs = 30;
    xCt = 0; yCt = 0; zCt = 0;
    
    BandViewPort2 = 0;
    
    qtGreen = QColor::fromCmykF(0.40, 0.0, 1.0, 0.0);
    qtPurple = QColor::fromCmykF(0.39, 0.39, 0.0, 0.0);
    
    qtRed = QColor::fromCmykF(0.0, 1.0, 0.0, 0.0);
    qtBlack = QColor(0, 0, 0, 255);
       
}

GLWidget::~GLWidget()
{
}

QSize GLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize GLWidget::sizeHint() const
{
    return QSize(400, 400);
}


static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}


void GLWidget::setEscala(int valor)
{
 vEsc = valor;
 updateGL();
}

void GLWidget::setDistFocal(int valor)
{
 vDFoc = valor;
 updateGL();
}

void GLWidget::setXTraslado(int valor)
{
 xTrs = valor;
 updateGL();  
}

void GLWidget::setYTraslado(int valor)
{
 yTrs = valor;                      
 updateGL();   
}

void GLWidget::setZTraslado(int valor)
{
 zTrs = valor;                         
 updateGL();    
}

void GLWidget::setXCentro(int valor)
{
 xCt = valor;
 updateGL();
}

void GLWidget::setYCentro(int valor)
{
 yCt = valor;
 updateGL();
}

void GLWidget::setZCentro(int valor)
{
 zCt = valor;
 updateGL();
}

void GLWidget::setXRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != xRot) {   
         xRot = angle;
         emit xRotationChanged(angle);
        
        updateGL();
   }
}

void GLWidget::setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != yRot) {
        yRot = angle;
        emit yRotationChanged(angle);
        
        updateGL();
    }
}

void GLWidget::setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != zRot) { 
        zRot = angle;
        emit zRotationChanged(angle);
        
        updateGL();
    }
}


void GLWidget::initializeGL()
{             
    qglClearColor(qtBlack);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    glEnable(GL_LIGHT2);
    glEnable(GL_MULTISAMPLE);                              
        
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambiente);
    glLightfv(GL_LIGHT0, GL_POSITION, light_Position_a);
    
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_difusa);
    glLightfv(GL_LIGHT1, GL_POSITION, light_Position_d1);

    glLightfv(GL_LIGHT2, GL_DIFFUSE, light_difusa);
    glLightfv(GL_LIGHT2, GL_POSITION, light_Position_d2);
         
    glEnable(GL_DEPTH_TEST);
    
}

void GLWidget::setBand(int band)
{
 BandViewPort2 = band;
}

void GLWidget::paintGL()
{   
//**************************************************************
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); 
    
    if (BandViewPort2)
     {
      gluPerspective(60.0, 1.0, 3.0, 500.0);
      gluLookAt (-2, 2, 12, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
      
      glScalef(1, 1, 1);
      
      glBegin(GL_LINES);
        glColor3f(0.253f, 0.253f, 0.200f);
                 
        glVertex3d(5, 0, 0);  
        glVertex3d(-5, 0, 0);
        
        glVertex3d(0, 5, 0);
        glVertex3d(0, -5, 0);
        
        glVertex3d(0, 0, 5);
        glVertex3d(0, 0, -5);    
      glEnd();
                                                                                                                         
      glPushMatrix();        
       
      glRotatef(xRot/16, 1.0, 0.0, 0.0); 
      
      glRotatef(yRot/16.0, 0.0, 1.0, 0.0);
      
      glRotatef(zRot/16.0, 0.0, 0.0, 1.0);
      
      
       printf("Rot X: %d, Rot Y: %d, Rot Z: %d\n", xRot/16, yRot/16, zRot/16);
      
       if(xRot/16 == 90 || yRot/16 == 90 || zRot/16 == 90 || xRot/16 == 180 || yRot/16 == 180 || zRot/16 == 180 || xRot/16 == 270 || yRot/16 == 270 || zRot/16 == 270 || xRot/16 == 360 || yRot/16 == 360 || zRot/16 == 360 )
         glColor3f (0.225, 0.163, 0.075);
       else
         glColor3f (0.075, 0.163, 0.225);
      
      
       glTranslatef(0.3*xTrs, 0.3*yTrs, 0.3*zTrs);                                                     
       glutSolidCube(0.3);
      
       glBegin(GL_LINES);
          glColor3f(1.0f, 0.0f, 0.0f);
                                             
          glVertex3d(1, 0, 0);   
          glVertex3d(-1, 0, 0);
                         
          glColor3f(0.0f, 1.0f, 0.0f);
                                                                                         
          glVertex3d(0, 1, 0);  
          glVertex3d(0, -1, 0);
         
          glColor3f(0.08f, 0.08f, 1.0f);
                                                                                                                                       
          glVertex3d(0, 0, 1);  
         
          glColor3f(0.8f, 0.8f, 0.0f);
          glVertex3d(0, 0, -1);
       glEnd();
                                                                                                                                                             
      glPopMatrix();
      
      
      glPushMatrix();
        glColor3f (0.293, 0.067, 0.067);          
        glutWireTeapot(1);
      glPopMatrix();
     
      glPushMatrix();
        glColor3f (0.027, 0.067, 0.193);
        glTranslatef(0.0, 0.0, -7);
                              
        glutSolidTorus(0.25,1.5,30,20);
      glPopMatrix();
     }
    
    else
     {
      gluPerspective((GLfloat) vDFoc, 1.0, 3.0, 500.0);
      gluLookAt (0.3*xTrs, 0.3*yTrs, 0.3*zTrs, 0, 0, 0, 0.0, 1.0, 0.0);

      glScalef(1+0.1*vEsc, 1+0.1*vEsc, 1+0.1*vEsc);
    
      glViewport (5*xCt, 5*yCt, 400, 400);
    
      glBegin(GL_LINES);
        glColor3f(0.253f, 0.253f, 0.200f);
        
        glVertex3d(5, 0, 0);
        glVertex3d(-5, 0, 0);
                        
        glVertex3d(0, 5, 0);
        glVertex3d(0, -5, 0);
                                                
        glVertex3d(0, 0, 5);
        glVertex3d(0, 0, -5);                     
      glEnd();
      
      glRotatef(xRot / 16.0, -1.0, 0.0, 0.0);
      glRotatef(yRot / 16.0, 0.0, -1.0, 0.0);
      glRotatef(zRot / 16.0, 0.0, 0.0, -1.0);
      
      glColor3f (0.293, 0.067, 0.067);
      glutWireTeapot(1);
      
      glPushMatrix();
       glColor3f (0.027, 0.067, 0.193);
       glTranslatef(0.0, 0.0, -7);
                                                            
       glutSolidTorus(0.25,1.5,30,20);
      glPopMatrix();
                                                                          
     }                                                                                               
//**************************************************************
}

void GLWidget::resizeGL(int width, int height)
{
    glViewport (0, 0, (GLsizei) width, (GLsizei) height);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        setXRotation(xRot + 8 * dy);
        setYRotation(yRot + 8 * dx);
    } else if (event->buttons() & Qt::RightButton) {
        setXRotation(xRot + 8 * dy);
        setZRotation(zRot + 8 * dx);
    }
    
    lastPos = event->pos();
}


