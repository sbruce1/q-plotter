#include <GL/glut.h>

// Data to plot
float x[] = {-0.8, -0.4, 0.0, 0.4, 0.8};
float y[] = {-0.6, 0.6, -0.6, 0.6, -0.6};
int points = 5;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Draw axes
    glColor3f(0.5, 0.5, 0.5);  // Gray color for axes
    glBegin(GL_LINES);
        glVertex2f(-1.0, 0.0);  // X-axis
        glVertex2f(1.0, 0.0);
        glVertex2f(0.0, -1.0);  // Y-axis
        glVertex2f(0.0, 1.0);
    glEnd();
    
    // Draw connected points
    glColor3f(1.0, 1.0, 1.0);  // White color for line
    glBegin(GL_LINE_STRIP);
    for(int i = 0; i < points; i++) {
        glVertex2f(x[i], y[i]);
    }
    glEnd();
    
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Simple Connected Plot");
    
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}