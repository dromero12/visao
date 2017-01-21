#include <QtGui>
#include "visao.h"
#include <GL/glut.h>

int main(int argc, char *argv[])
{
      QApplication app(argc, argv);
      visao *openvisao = new visao();
                  
      openvisao->show();
      
      glutInit(&argc, argv);
      glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
                                                                    
      return app.exec();
}
