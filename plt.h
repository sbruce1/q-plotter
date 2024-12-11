#include <stdio.h>
#include "k.h"

#define G(s,...) fprintf(g,s"\n",##__VA_ARGS__)
#define GS(s) G("set "s)