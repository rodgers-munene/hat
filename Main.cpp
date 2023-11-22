
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0, 0.5);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5,0.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.5, 0.0);
    glEnd();

    // Draw the square
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.25, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.25, 0.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.25, -0.50);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.25, -0.50);
    glEnd();

    // Draw the parallels
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex2f(0.30, 0.0);
    glVertex2f(0.30, -0.55);
    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex2f(0.30, -0.55);
    glVertex2f(-0.30, -0.55);
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex2f(-0.30, -0.55);
    glVertex2f(-0.30, 0);
    glEnd();

    glFlush();
}



void reshape(int w, int h) {
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("A Simple Coloured Hut");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutMainLoop();
    return 0;
}