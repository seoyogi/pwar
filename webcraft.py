from OpenGL.GL import *
from OpenGL.GLUT import *

def draw():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glTranslatef(0,0,-5)
    glutSolidCube(1)
    glutSwapBuffers()

glutInit()
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH)
glutCreateWindow(b"PythonCraft")
glEnable(GL_DEPTH_TEST)
glutDisplayFunc(draw)
glutMainLoop()
