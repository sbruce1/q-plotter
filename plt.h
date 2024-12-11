#include <GL/glut.h>
#include "k.h"

typedef unsigned int UI;
K xp, yp;

#define X(r,n,a,...) typedef r T##n; Z T##n(*n)a;
#undef X

