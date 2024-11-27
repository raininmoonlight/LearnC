#include <stdio.h>

int main()
{
    int soma = 0;
    for(int i = 0; i <= 100; i++ )
    {
        if (i % 2 == 0)
        {
            soma += i;

        }
    }

    printf("** Resultado final da soma de todosos numeros anteriores = %d **\n", soma);

}