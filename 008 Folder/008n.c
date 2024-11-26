
#include <stdio.h>

int main()
{

    for(int k = 0; k <= 3; k++) 
    {
        for(int j = 0; j <= 3; j++) //o loop externo(k) controla as vezes que o loop interno(j) acontece fazendo um ciclo
        {
            printf("k=%d j=%d\n", k, j);
        }
    }

    return 0;
}