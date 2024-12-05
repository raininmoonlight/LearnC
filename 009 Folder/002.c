#include <stdio.h>

int main() {

    int numbers[] = {20, 50, 80, 60, 100, 50};
    printf("Numero: %d\n", numbers[0]);

    printf("Bytes: %lu\n", sizeof(numbers));
    int lenght = sizeof(numbers) / sizeof(numbers[0]);

    printf("Tamanho da array: %d\n", lenght);

    return 0;
}