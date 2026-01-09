#include <GL/glut.h>
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glutWireCube(1);
 glFlush();
}
int main(int argc,char** argv){
 glutInit(&argc,argv);
 glutCreateWindow("CCraft");
 glutDisplayFunc(display);
 glutMainLoop();
}
