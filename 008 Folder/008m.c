#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5) {
            continue;
        } else if (i == 8)
        {
            break;
        }

        printf("%d\n", i);
        
    }
}