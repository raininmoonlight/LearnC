
#include <stdio.h>

int main() {
    
    int quantidadeItens = 50;
    float precoPorItem = 12.99;
    float valorTotal = quantidadeItens * precoPorItem;
    char moeda[3] = "R$";

    printf("Quantidade de itens: %d\n", quantidadeItens);
    printf("Preco por item: %.2f\n", precoPorItem);
    printf("Valor total: %.2f\n", valorTotal);
    printf("Moeda usada: %s\n", moeda);

    return 0;
}