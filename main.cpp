#include <GL/glut.h>

float angle = 0;

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0, 0, -5);
    glRotatef(angle, 1, 1, 0);
    glutSolidCube(1);
    glutSwapBuffers();
}

void timer(int) {
    angle += 1;
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("C++ 3D Game");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
}
