from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

angle = 0

def draw():
    global angle
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    glTranslatef(0,0,-5)
    glRotatef(angle,1,1,0)
    glutWireCube(1)
    angle += 1
    glutSwapBuffers()

def timer(v):
    glutPostRedisplay()
    glutTimerFunc(16, timer, 0)

glutInit()
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH)
glutCreateWindow(b"Python 3D Game")
glEnable(GL_DEPTH_TEST)
glutDisplayFunc(draw)
glutTimerFunc(0, timer, 0)
glutMainLoop()
