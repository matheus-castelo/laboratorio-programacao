#include <stdio.h>

int main(){
int horas, minutos, segundos;
  
puts("Digite as horas:");
scanf("%d",&horas);
  
puts("Digite os minutos:");
scanf("%d",&minutos);
  
puts("Digite os segundos:");
scanf("%d", &segundos);

printf("O valor desse tempo em segundos é: %d",horas*60*60+minutos*60+segundos);
  return 0;
}