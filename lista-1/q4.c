#include <stdio.h>

int main(){
   float valorDaConta;
  puts("Digite o valor da conta:");
  scanf("%f",&valorDaConta);

  printf("O valor da conta com 10% de gorjeta será %.2f", valorDaConta*1.1);


  return 0;
}