/* Uma loja vende seus produtos no sistema entrada mais duas presta ̧c ̃oes, sendo a entrada maior do que
ou igual `as duas presta ̧c ̃oes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. Por exemplo, se o
valor da mercadoria for R$ 270,00, a entrada e as duas presta ̧c ̃oes s ̃ao iguais a R$ 90,00; se o valor da
mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas presta ̧c ̃oes s ̃ao iguais a R$ 100,00. Escreva
um programa que receba o valor da mercadoria e forne ̧ca o valor da entrada e das duas presta ̧c ̃oes, de
acordo com as regras acima.*/

#include <stdio.h>

int main(){
    float valorProduto, parcelas, entrada;
    puts("Digite respectivamente o valor do Produto e o numero das parcelas: ");
    scanf("%f %f", &valorProduto, &parcelas);
    entrada = valorProduto/2;
    parcelas = entrada/parcelas;
    printf("O valor do produto é %.2f reais, você dará %.2f de entrada e pagará uma parcela de %.2f", valorProduto, entrada, parcelas);
    
    return 0;
}