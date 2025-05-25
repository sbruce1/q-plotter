#include "plt.h"

K plot(K x,K y){FP g=GP();GS("autoscale");GN("pl '-' w l");DO(xn,GN("%g %g",kF(x)[i],kF(y)[i]));GN("e");pclose(g);(K)0;};
K gmake(K x, VFP f){
    FP g = GP();
    f(g);
    R kj((J)g);
}
V livehm(FP g){
    GS("term wxt size 800,600");
    hms(g);
}
V gifhm(FP g) {
    GS("terminal gif animate optimize delay 10 size 800,600");
    GS("output 'out.gif'");
    hms(g);
}
V matplt(FP g, K x){
    I cn = kK(x)[0]->n;
    GN("splot '-' matrix with pm3d");
    DO(xn, K r = kK(x)[i]; DOJ(cn, G("%g ", kF(r)[j]));GN(""));GN("e");
}
K glivehm(K x){R gmake(x, livehm);}
K ggifhm(K x){R gmake(x, gifhm);}
K gclose(K x){pclose((FP)x->j);R (K)0;}
K hmupd(K handle, K x) {
    FP g = (FP)(handle->j);
    matplt(g, x);
    fflush(g);
    R (K)0;
}
K cbrange(K handle, K x, K y){
    FP g = (FP)(handle->j);
    GN("set cbrange[%g:%g]",x->f,y->f);
    R (K)0;
}
K hm(K x){
    FP g=GP();
    hms(g);
    matplt(g, x);
    pclose(g);
    R (K)0;
}
