#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

GLint b=300;
float  counter=700.0;
void initOpenGl()
{
    glClearColor(0.0,0.4,0.6,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}


void boat()
{
   glLoadIdentity();
   counter=counter-0.30;
   glTranslated(counter,250,0.0);
   glScaled(0.5,0.5,0.5);
   glBegin(GL_POLYGON);
   glVertex2f(0,0);
   glVertex2f(100,100);
   glVertex2f(300,100);
   glVertex2f(400,20);
   glVertex2f(400,-20);
   glVertex2f(300,-100);
   glVertex2f(100,-100);

    //light
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
   glVertex2f(120,80);
   glVertex2f(140,80);
   glVertex2f(140,-80);
   glVertex2f(120,-80);
   glEnd();

   //black bars start
     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
   glVertex2f(150,80);
   glVertex2f(190,80);
   glVertex2f(190,-80);
   glVertex2f(150,-80);
   glEnd();

   glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
   glVertex2f(200,80);
   glVertex2f(240,80);
   glVertex2f(240,-80);
   glVertex2f(200,-80);
   glEnd();

   glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
   glVertex2f(250,80);
   glVertex2f(290,80);
   glVertex2f(290,-80);
   glVertex2f(250,-80);
   glEnd();
    //black bars ends

    // white box start
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
   glVertex2f(300,60);
   glVertex2f(350,30);
   glVertex2f(350,-30);
   glVertex2f(300,-60);
   glEnd();
    //back red light
   glColor3f(1,0,0);
    glBegin(GL_POLYGON);
   glVertex2f(390,20);
   glVertex2f(400,20);
   glVertex2f(400,-20);
   glVertex2f(390,-20);
   glEnd();
}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,1.0,0.0);
  boat();
  glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1000,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Boat Moving");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
