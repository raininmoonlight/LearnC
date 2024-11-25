#include <stdio.h>
#include <stdbool.h>

int main() {
    bool progamarFun = false;
    printf("%d", progamarFun);

    printf("%d", 10 > 9);


    int idadeDeVoto = 16;
    int idade = 32;

    if(idade > idadeDeVoto) {
        printf("Pode votar");
    } else {
        printf("nao poda votar");
    }

    return 0;
}
