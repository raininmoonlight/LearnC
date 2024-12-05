#include <stdio.h>

int main() {

    int numbers[] = {20, 50, 80, 60, 100, 50};
    printf("Numero: %d\n", numbers[0]);

    printf("Bytes: %lu\n", sizeof(numbers));


    for(int i = 0; i < 4; i++) {
        printf("numero: %d\n", numbers[i]);
    }

    return 0;
}
