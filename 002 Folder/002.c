#include <stdio.h>
int main() {
    char nomeDog[4] = "kao"; // Tamanho correto para "kao" + '\0'
    int idade = 18;
    int idadeDog = 3;

    // Texto formatado em uma única string
    printf("Minha idade é %d anos e meu cachorro se chama %s, e eu gosto muito dele, ele tem %d anos\n", idade, nomeDog, idadeDog);

    return 0;
}
