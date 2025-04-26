#include "plt.h"

K draw(K x,K y){FP g=GP();GS("autoscale");GN("pl '-' w l");DO(xn,GN("%g %g",kF(x)[i],kF(y)[i]));GN("e");pclose(g);(K)0;};

K heatmap(K x) {
    FP g=GP();
    I rn = x->n;
    I cn = kK(x)[0]->n;
    GS("palette defined (0 'blue', 0.5 'white', 1 'red')");GS("view map");GS("autoscale");GS("pm3d map");
    GN("splot '-' matrix with pm3d");
    DO(rn, K r = kK(x)[i]; DOJ(cn, G("%g ", kF(r)[j]));GN(""));GN("e");
    pclose(g);(K)0;
}