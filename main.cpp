#include <GL/glut.h>
float r=0;
void display(){
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glLoadIdentity();
 glTranslatef(0,0,-5);
 glRotatef(r++,1,1,0);
 glutSolidCube(1);
 glutSwapBuffers();
}
void timer(int){
 glutPostRedisplay();
 glutTimerFunc(16,timer,0);
}
int main(int c,char** v){
 glutInit(&c,v);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
 glutCreateWindow("CppCraft");
 glEnable(GL_DEPTH_TEST);
 glutDisplayFunc(display);
 timer(0);
 glutMainLoop();
}
