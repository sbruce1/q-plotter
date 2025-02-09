#include "plt.h"

K draw(K x,K y){FILE *g=popen("gnuplot -persistent 2>/dev/null","w");GS("autoscale");G("pl '-' w l");DO(xn,G("%g %g",kF(x)[i],kF(y)[i]));G("e");pclose(g);(K)0;};