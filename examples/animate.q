\l plt.q
/ f:.plt.livehm[1]; // Just animates
f:.plt.gifhm[1]; // Creates gif
n:100;
s:10;
x:%[;s]til n;
y:sin x;
z:y*\:/:y;
do[20;.plt.hmupd[f;z];z:1 rotate z];
.plt.close[f];