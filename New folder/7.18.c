#include <stdio.h>
int main()
{
    int i, j, a = 1, space = 4;
    char c = 'A';

    for(int i = 1; i <= 5; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        if(i%2)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d ", a++);
            }
        }
        else
        {
            for(j = 1; j <= i; j++)
            {
                printf("%c ", c++);
            }
        }
        printf("\n");
    }
    return 0;
}
