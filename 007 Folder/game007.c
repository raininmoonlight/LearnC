#include <stdio.h>

int main() {
    int dado = 1;
    while (dado <= 6) {
        if (dado < 6) {
            printf("Sem YATZY!!\n");
        } else {
            printf("Yatzy\n");
        }
        printf("%d\n", dado);
        dado = dado + 1;
    }
    
    return 0;
}