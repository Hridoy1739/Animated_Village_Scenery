#include <GL/glut.h>



void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // sky-blue background
    glColor3f(1.0f, 1.0f, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1000, 0, 500, -100, 100);  // fixed orthographic projection
}

void display(void){

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
