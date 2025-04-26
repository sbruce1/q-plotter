#include "plt.h"

K draw(K x,K y){FILE *g=popen("gnuplot -persistent 2>/dev/null","w");GS("autoscale");G("pl '-' w l");DO(xn,G("%g %g",kF(x)[i],kF(y)[i]));G("e");pclose(g);(K)0;};

K heatmap(K x) {
    FILE *g = popen("gnuplot -persistent 2>/dev/null", "w");
    int rows = x->n;
    int cols = kK(x)[0]->n;
    
    GS("palette defined (0 'blue', 0.5 'white', 1 'red')");
    GS("view map");
    GS("autoscale");
    G("set pm3d map");
    G("splot '-' matrix with pm3d");
    
    for(int i = 0; i < rows; i++) {
        K row = kK(x)[i];
        for(int j = 0; j < cols; j++) {
            fprintf(g, "%g ", kF(row)[j]);
        }
        fprintf(g, "\n");
    }
    fprintf(g, "e\n");

    pclose(g);
    return (K)0;
}