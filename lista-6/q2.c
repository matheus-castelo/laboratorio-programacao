#include <stdio.h>

typedef struct {
    char nomePeca[100];
    int numeroPeca;
    float preco;
    int numeroPedido;
} Estoque;

void mostrar_peca(Estoque *e) {
    printf("Nome da peça: %s\n", e->nomePeca);
    printf("Número da peça: %d\n", e->numeroPeca);
    printf("Preço: %.2f\n", e->preco);
    printf("Número do pedido: %d\n", e->numeroPedido);
}

int main() {
    Estoque peca;

    printf("Digite o nome da peça: ");
    scanf(" %[^\n]", peca.nomePeca);
    printf("Digite o número da peça: ");
    scanf("%d", &peca.numeroPeca);
    printf("Digite o preço da peça: ");
    scanf("%f", &peca.preco);
    printf("Digite o número do pedido: ");
    scanf("%d", &peca.numeroPedido);

    mostrar_peca(&peca);
    
    return 0;
}
