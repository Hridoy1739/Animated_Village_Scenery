#include <GL/glut.h>
#include "objects.cpp"

void init() {
    glClearColor(0.5, 0.8, 1.0, 1.0); // sky blue
    glColor3f(1.0, 1.0, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1000, 0, 500, -100, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawScene();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 500);
    glutCreateWindow("Animated Village Scenery");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
