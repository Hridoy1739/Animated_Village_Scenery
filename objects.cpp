#include <GL/glut.h>
#include <cmath>
// ===== Ground =====
void drawGround() {
    glColor3f(0.2, 0.8, 0.2);   // green grass
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(1000.0, 0.0, 0.0);
        glVertex3f(1000.0, 150.0, 0.0);
        glVertex3f(0.0, 150.0, 0.0);
    glEnd();
}

// ===== House =====
void drawHouse() {
    // Base
    glColor3f(0.8, 0.5, 0.2);   // brown
    glBegin(GL_POLYGON);
        glVertex3f(200.0, 150.0, 0.0);
        glVertex3f(400.0, 150.0, 0.0);
        glVertex3f(400.0, 300.0, 0.0);
        glVertex3f(200.0, 300.0, 0.0);
    glEnd();

    // Roof
    glColor3f(1.0, 0.0, 0.0);  // red
    glBegin(GL_TRIANGLES);
        glVertex3f(200.0, 300.0, 0.0);
        glVertex3f(400.0, 300.0, 0.0);
        glVertex3f(300.0, 400.0, 0.0);
    glEnd();
}

// ===== Tree =====
void drawTree() {
    // Trunk
    glColor3f(0.55, 0.27, 0.07);
    glBegin(GL_POLYGON);
        glVertex3f(600.0, 150.0, 0.0);
        glVertex3f(620.0, 150.0, 0.0);
        glVertex3f(620.0, 250.0, 0.0);
        glVertex3f(600.0, 250.0, 0.0);
    glEnd();
    // Leaves
    glColor3f(0.0, 0.8, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex3f(580.0, 250.0, 0.0);
        glVertex3f(640.0, 250.0, 0.0);
        glVertex3f(610.0, 330.0, 0.0);
    glEnd();
}

// ===== Sun =====
void drawSun() {
    int xc = 850;
    int yc = 450;

    glColor3f(1.0, 1.0, 0.0);  // yellow
    glPointSize(2.0);
    for (int r = 50; r > 0; r--) {

        int x = 0;
        int y = r;
        int d = 1 - r;

        glBegin(GL_POINTS);
        while (x <= y) {
            glVertex3f(xc + x, yc + y, 0);
            glVertex3f(xc - x, yc + y, 0);
            glVertex3f(xc + x, yc - y, 0);
            glVertex3f(xc - x, yc - y, 0);
            glVertex3f(xc + y, yc + x, 0);
            glVertex3f(xc - y, yc + x, 0);
            glVertex3f(xc + y, yc - x, 0);
            glVertex3f(xc - y, yc - x, 0);

            if (d < 0) d += 2 * x + 3;
            else {
                d += 2 * (x - y) + 5;
                y--;
            }
            x++;
        }
        glEnd();
    }
}
// ===== River =====
void drawRiver() {
    glColor3f(0.0, 0.5, 1.0);  // blue
    glBegin(GL_POLYGON);
        glVertex3f(0.0f, 50.0f, 0.0f);
        glVertex3f(1000.0f, 50.0f, 0.0f);
        glVertex3f(1000.0f, 120.0f, 0.0f);
        glVertex3f(0.0f, 120.0f, 0.0f);
    glEnd();
}

// ===== Draw Full Scene =====
void drawScene() {
    drawGround();
    drawRiver();
    drawHouse();
    drawTree();
    drawSun();
}
