#include "plt.h"
#include <stdio.h>

ZV glcls(){glClear(GL_COLOR_BUFFER_BIT);};
ZV glc3(F x,F y,F z){glColor3f(x,y,z);};
ZV glb(UI x){glBegin(x);};
ZV gle(){glEnd();};
ZV glv2(F x,F y){glVertex2f(x,y);};
ZV glsb(){glutSwapBuffers();};
ZV glini(){glutInit((int[]){1},(S)"");};
ZV display()
 {K x=xp;
 K y=yp;
 glcls();
 glc3(0.5,0.5,0.5);
 glb(GL_LINES);
 for(I i = 0; i<xn; i++){
    printf("%f %f", kK(x)[i]->f,kK(y)[i]->f);
    glv2(kK(x)[i]->f,kK(y)[i]->f);
 }
 gle();
 glsb();
 
 }

K window(K x,K y)
 {
 printf("Before init");
 glini();
 printf("After init");
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize(400,400);glutCreateWindow("Test");
 glClearColor(0.0,0.0,0.0,1.0);
 xp=x;
 yp=y;
 glutDisplayFunc(display);
 glutMainLoop();
 return (K)0;
 };
