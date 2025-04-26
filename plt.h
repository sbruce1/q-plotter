#include <stdio.h>
#include "k.h"

#define DOJ(n,x)  {J j=0,_j=(n);for(;j<_j;++j){x;}}

#define G(s,...) fprintf(g,s,##__VA_ARGS__)
#define GN(s,...) fprintf(g,s"\n",##__VA_ARGS__)
#define GS(s) GN("set "s)

typedef FILE* FP;
typedef V (*VFP)(FP);

FP GP() {R popen("gnuplot -persistent 2>/dev/null", "w");}
V hms(FP g){
    GS("palette defined (0 'blue', 0.5 'white', 1 'red')");
    GS("view map");
    GS("autoscale");
    GS("pm3d map");
    GS("pm3d interpolate 10,10");
}