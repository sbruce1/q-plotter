\l plt.q
f:.plt.open[1];
n:100;
s:10;
x:%[;s]til n;
y:sin x;
z:y*\:/:y;
do[100;.plt.hmupd[f;z];z:1 rotate z;system "sleep 0.1"];
.plt.close[f];