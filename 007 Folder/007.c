#include <stdio.h>

int main() {
    int numeroAleatorio = 0;

    while (numeroAleatorio <= 10) {
        printf("%d\n", numeroAleatorio);
        numeroAleatorio++;
    }

    int i = 0; // Inicialização da variável 'i'

    // A condição é informada depois (do...while)
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10); // Ajustei a condição para usar 'i'


    //Example

    int anoNovo = 10;
    while (anoNovo >= 0)
    {
        printf("%d\n", anoNovo);
        anoNovo--;

    }
    printf("ano novo!!!!");
    

    return 0;
}
