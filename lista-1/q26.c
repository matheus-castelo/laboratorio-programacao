#include <stdio.h>
#include <math.h>

int main () {
 float x1,x2,y1,y2, resultado;
 puts("Digite respectivamente os pontos x1,x2,y1,y2");
 scanf("%f%*c", &x1);
 scanf("%f%*c", &x2);
 scanf("%f%*c", &y1);
 scanf("%f%*c", &y2);
 
 resultado = sqrt( (x1*x1)(x2*x2) - (y1*y1)(y2*y2) );
 printf("Resultado: %.2f", resultado);

 

return 0;
}