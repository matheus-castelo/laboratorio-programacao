#include <stdio.h>


int main () {
 float x,y,z;
 puts("Digite um numero decimal: ");
 scanf("%f%*c",&x);
 
 puts("Digite outro numero decimal: ");
 scanf("%f%*c", &y);
 
 puts("Digite outro numero decimal: ");
 scanf("%f%*c",&z);
 
 printf("A media dos 3 numeros é %.2f", (x+y+z)/3);


return 0;
}