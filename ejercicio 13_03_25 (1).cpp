#include  <stdio.h>
#include  <stdlib.h>
int main (){
int arregloA[10];
arregloA[0]=3;
arregloA[1]=5;
arregloA[2]=6;
arregloA[3]=8;
arregloA[4]=4;
arregloA[5]=7;
arregloA[6]=8;
arregloA[7]=5;
arregloA[8]=3;
arregloA[9]=1;
int arregloB[10];
arregloB[0]=3;
arregloB[1]=4;
arregloB[2]=6;
arregloB[3]=8;
arregloB[4]=9;
arregloB[5]=1;
arregloB[6]=2;
arregloB[7]=3;
arregloB[8]=0;
arregloB[9]=9;
printf("%d\n",arregloA[3]%(arregloB[2]/2));
int i=0;
while(i<10){
   printf("%d,",arregloB[i]*arregloA[1]-arregloA[9]);
   i++;
}
printf("\n%d\n",arregloA[0]+(arregloA[1+2]));
printf("%d\n",arregloA[5]+arregloB[5]);
printf("%f\n",(arregloA[3] / arregloB[2])/ 2);

system("Pause");
return 0;
}