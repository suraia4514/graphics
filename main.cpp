#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
int windowWidth=1500;
int windowHeight=1500;
double txval=0, txval1=0;
double sval=1;
bool flagScale=false;
 float _angle1 = 0.0f;
 void sun(){
  ///sun///
    glPushMatrix();
    float theta;
    glColor3d(255,255,0);
    glTranslatef(30.0, 7.0, 0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta=i*31416/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();


    glPopMatrix();
 }


  void moon(){
  ///sun///
    glPushMatrix();
    float theta;
    glColor3d(1.0, 1.0, 1.0);
    glTranslatef(30.0, 7.0, 0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta=i*31416/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();


    glPopMatrix();
 }

void circlewind(){
//circle//
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(32.0f,3.0f,0.0f);
    glutSolidSphere(0.5,150,150);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);


    glBegin(GL_QUADS);// first stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(5.0f,0.0f);
    glVertex2f(5.0f,0.25f);
    glVertex2f(0.0f,0.25f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,5.0f);
    glVertex2f(-0.25f,5.0f);
    glVertex2f(-0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,-0.25f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-5.0f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-5.0f);
    glVertex2f(0.25f,-5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// first triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(5.0f,-2.5f);
    glVertex2f(5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// second triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,0.025f);
    glVertex2f(2.5f,5.0f);
    glVertex2f(0.0f,5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// third triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-5.0f,2.5f);
    glVertex2f(-5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// fourth triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,-0.025f);
    glVertex2f(-2.5f,-5.0f);
    glVertex2f(0.0f,-5.0f);
    glEnd();







    glPopMatrix();
}
void hill(){
///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-11.5,4.5);
    glVertex2f(-7.5,4.5);
    glVertex2f(-7,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11.5,4.5);
    glVertex2f(-11,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-7.5,4.5);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11,5.5);
    glVertex2f(-10.5,6);
    glVertex2f(-8.5,6);
    glVertex2f(-8,5.5);
    //glVertex2f();
    glEnd();

//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.5,6);
    glVertex2f(-10.3,6.2);
    glVertex2f(-8.7,6.2);
    glVertex2f(-8.5,6);
    //glVertex2f();
    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.3,6.2);
    glVertex2f(-10.2,6.3);
    glVertex2f(-8.8,6.3);
    glVertex2f(-8.7,6);
    //glVertex2f();
    glEnd();
}
void boat(){
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(21.0f, -15.5f);
        glVertex2f(17.50f, -15.5f);
        glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(17.0f, -17.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
        glVertex2f(20.5f, -15.5f);
        glVertex2f(21.0f, -13.5f);
        glVertex2f(18.5f, -13.5f);
        glVertex2f(18.0f, -15.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(19.8f, -13.5f);
        glVertex2f(19.8f, -13.0f);
        glVertex2f(19.7f, -13.0f);
        glVertex2f(19.7f, -13.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -17.0f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(15.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(23.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(18.0f, -16.5f);
        glVertex2f(17.5f, -15.5f);

    glEnd();

    glPopMatrix();
    }
void treeleaf(){
float theta2;
    glColor3ub(50,205,50);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta2=i*31416/180;
        glVertex2f(1*cos(theta2),1*sin(theta2));
    }
    glEnd();
}
void house(){
//polygon 1
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


//polygon 2
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();

//polygon 5
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();

//polygon 6
    glBegin(GL_QUADS);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

//polygon 7
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();


///door:left
//polygon a
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon b
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon c
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-3.2f,-1.4f);
    glVertex2f(-3.2f,-3.0f);

    glEnd();

///tree left side
//polygon 1
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
///tree upper side///

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.5, 3.0, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 1.5, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.0, 4.0, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.0, 5.0, 0);
   treeleaf();
    glPopMatrix();



}

void cloud(){
float theta1;
    glColor3d(255,255,255);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta1=i*31416/180;
        glVertex2f(0.7*cos(theta1),0.7*sin(theta1));
    }
    glEnd();
}

void drawScene() {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode(GL_MODELVIEW);

    ///sky///
    glBegin(GL_QUADS);
    glColor4f(0.7f, 1.0f, 1.0f, 1.0f);

    glVertex2f(38.0,14.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,14.0);


    glEnd();
    glPushMatrix();
    glTranslatef(txval,0,0);
sun();
glPopMatrix();
///cloud 1///
    glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 8.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 9.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 9.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 8.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(-1, 8.5, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 8.5, 0);
    cloud();
    glPopMatrix();

    glPopMatrix();




///cloud 2///


    glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    cloud();
    glPopMatrix();

     glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
 cloud();
     glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
   cloud();
    glPopMatrix();

    glPopMatrix();

  ///cloud 3///

    glPushMatrix();



    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
 cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
  cloud();
    glPopMatrix();

    glPopMatrix();
    //hill//
    glPushMatrix();
hill();
glPopMatrix();
///Hill 2///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-7,3);
    glVertex2f(-6.5,4);
    glVertex2f(-4.5,4);
    glVertex2f(-4,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-6.5,4);
    glVertex2f(-6,4.5);
    glVertex2f(-5,4.5);
    glVertex2f(-4.5,4);
    //glVertex2f();
    glEnd();

///Hill 3///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-4,3);
    glVertex2f(-3.5,4.5);
    glVertex2f(-1.5,4.5);
    glVertex2f(-1,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-3.5,4.5);
    glVertex2f(-3,5);
    glVertex2f(-2,5);
    glVertex2f(-1.5,4.5);
    //glVertex2f();
    glEnd();

///Hill 4///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 5///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(5,3);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(7,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(6,4.5);
    glEnd();

///hill 6///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 7///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(15,5);
    glVertex2f(20,5);
    glVertex2f(21,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(15,5);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(20,5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(17.5,6.5);
    glEnd();

///hill 8///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(21,3);
    glVertex2f(22,5);
    glVertex2f(24,5);
    glVertex2f(25,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(22,5);
    glVertex2f(22.5,5.5);
    glVertex2f(23.5,5.5);
    glVertex2f(24,5);
    //glVertex2f();
    glEnd();

///hill 9///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(25.5,4.5);
    glVertex2f(28.5,4.5);
    glVertex2f(29,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25.5,4.5);
    glVertex2f(26,5);
    glVertex2f(28,5);
    glVertex2f(28.5,4.5);
    //glVertex2f();
    glEnd();

///hill 10///
//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 11///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(33,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(32,5);
    glEnd();

///hill 12///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();

///sea portion///
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0,-19.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,-19.0);

    glEnd();
    ///left soil portion///
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(4.0,0.0);
    glVertex2f(6.0,1.0);
    glVertex2f(3.0,3.0);
    glVertex2f(-12.0f,3.0);
    glVertex2f(-12.0,0.0);

    glEnd();
    //polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();
///left sidewise border partition///
 //polygon 1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();


glPopMatrix();

house();
glPushMatrix();

///right soil portion///
//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,128,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(16.0f,1.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(38.0f,3.0f);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(12.5,3);
    glVertex2f(15.6,0.8);
    glVertex2f(16,1);
    glVertex2f(13,3);

    glEnd();

//polygon2//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);

    glEnd();


glPushMatrix();
glTranslatef(txval,0,0);
boat();
glPopMatrix();

///windmill structure///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);
    //glColor3ub(0,206,209);

    glVertex2f(33.0f,2.0f);
    glVertex2f(32.0f,-7.0f);
    glVertex2f(36.0f,-7.0f);
    glVertex2f(35.0f,1.0f);
    glVertex2f(34.5f,2.0f);
    glVertex2f(33.5f,2.0f);



    glEnd();

glPushMatrix();
glTranslatef(1.80,-0.75,0);
circlewind();
glPopMatrix();

     glFlush();
    glutSwapBuffers();
    }



    ///night

    void drawScene2() {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode(GL_MODELVIEW);

    ///sky///
    glBegin(GL_QUADS);
    glColor4f(0.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(38.0,14.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,14.0);


    glEnd();
    glPushMatrix();
    glTranslatef(txval,0,0);
moon();
glPopMatrix();
///cloud 1///
    glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 8.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 9.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 9.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 8.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(-1, 8.5, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 8.5, 0);
    cloud();
    glPopMatrix();

    glPopMatrix();




///cloud 2///


    glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    cloud();
    glPopMatrix();

     glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
 cloud();
     glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
   cloud();
    glPopMatrix();

    glPopMatrix();

  ///cloud 3///

    glPushMatrix();



    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
 cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
  cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
  cloud();
    glPopMatrix();

    glPopMatrix();
    //hill//
    glPushMatrix();
hill();
glPopMatrix();
///Hill 2///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-7,3);
    glVertex2f(-6.5,4);
    glVertex2f(-4.5,4);
    glVertex2f(-4,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-6.5,4);
    glVertex2f(-6,4.5);
    glVertex2f(-5,4.5);
    glVertex2f(-4.5,4);
    //glVertex2f();
    glEnd();

///Hill 3///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-4,3);
    glVertex2f(-3.5,4.5);
    glVertex2f(-1.5,4.5);
    glVertex2f(-1,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-3.5,4.5);
    glVertex2f(-3,5);
    glVertex2f(-2,5);
    glVertex2f(-1.5,4.5);
    //glVertex2f();
    glEnd();

///Hill 4///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 5///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(5,3);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(7,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(6,4.5);
    glEnd();

///hill 6///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 7///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(15,5);
    glVertex2f(20,5);
    glVertex2f(21,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(15,5);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(20,5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(17.5,6.5);
    glEnd();

///hill 8///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(21,3);
    glVertex2f(22,5);
    glVertex2f(24,5);
    glVertex2f(25,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(22,5);
    glVertex2f(22.5,5.5);
    glVertex2f(23.5,5.5);
    glVertex2f(24,5);
    //glVertex2f();
    glEnd();

///hill 9///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(25.5,4.5);
    glVertex2f(28.5,4.5);
    glVertex2f(29,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25.5,4.5);
    glVertex2f(26,5);
    glVertex2f(28,5);
    glVertex2f(28.5,4.5);
    //glVertex2f();
    glEnd();

///hill 10///
//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 11///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(33,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(32,5);
    glEnd();

///hill 12///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();

///sea portion///
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0,-19.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,-19.0);

    glEnd();
    ///left soil portion///
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(4.0,0.0);
    glVertex2f(6.0,1.0);
    glVertex2f(3.0,3.0);
    glVertex2f(-12.0f,3.0);
    glVertex2f(-12.0,0.0);

    glEnd();
    //polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();
///left sidewise border partition///
 //polygon 1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();


glPopMatrix();

house();
glPushMatrix();

///right soil portion///
//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,128,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(16.0f,1.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(38.0f,3.0f);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(12.5,3);
    glVertex2f(15.6,0.8);
    glVertex2f(16,1);
    glVertex2f(13,3);

    glEnd();

//polygon2//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);

    glEnd();


glPushMatrix();
glTranslatef(txval,0,0);
boat();
glPopMatrix();

///windmill structure///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(152,192,192);
    //glColor3ub(0,206,209);

    glVertex2f(33.0f,2.0f);
    glVertex2f(32.0f,-7.0f);
    glVertex2f(36.0f,-7.0f);
    glVertex2f(35.0f,1.0f);
    glVertex2f(34.5f,2.0f);
    glVertex2f(33.5f,2.0f);



    glEnd();

glPushMatrix();
glTranslatef(1.80,-0.75,0);
circlewind();
glPopMatrix();

     glFlush();
    glutSwapBuffers();
    }

void StartingText()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "VILLAGE SCENARIO",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME- Suraiya Islam",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551113",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR & PROPA PUNAM",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -10 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MODE",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " PRESS 'n' FOR NIGHT MODE",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, " PRESS 'f' FOR FRONT WINDOW",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }



}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-70,70,-50,50);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}





   void init(void)
{
    glClearColor( 0.0f, 0.0f, 0.0f, 1.0f);


}


void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
case 'd':
    txval+=0.45;
    break;
    case 'f':
    txval-=0.45;
    break;
    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27: // Escape key
        exit(1);
    }
    glutPostRedisplay();
}
void animate()
{
if (flagScale == true)
{
txval+= 0.0055;
if(txval > 21)
txval = -27;
txval1+= 0.0055;
if(txval1 > 21)
txval1 = -15;
}
if (flagScale == false)
{
txval -= 0.0050001;
if(txval < -28)
txval = 1;
txval1 -= 0.0050001;
    if(txval1 < -28)
    txval1 = 1;
}



glutPostRedisplay();
}

void update3(int value) {

    _angle1-=1.5f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}

void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
   case  'd':
       glutDestroyWindow(1);
       glutInitWindowSize(1500, 1000);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(drawScene);
              break;



        case 'n':
           glutDestroyWindow(1);
       glutInitWindowSize(1500, 1000);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(drawScene2);

            glutPostRedisplay();
            break;
        case 'f':
            glutDestroyWindow(1);
            glutInitWindowSize(1500, 1000);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);

            glutPostRedisplay();
            break;

case 27: // Escape key
exit(1);

}
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1500, 1000);


    glEnable( GL_DEPTH_TEST );
    glutCreateWindow("suraia");
    glutKeyboardFunc(handleKeypress);
  init();
    glShadeModel( GL_SMOOTH );
    glutDisplayFunc(display);


    glutTimerFunc(10, update3, 0);

    glutIdleFunc(animate);
    glDepthFunc(GL_LEQUAL);
    glutMainLoop();
    return 0;
}
