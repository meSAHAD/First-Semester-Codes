
#include <stdio.h>
main()
{
    int i, j;

    for(i = 6; i >= 1; i--)
    {
        //printing space
        if(i == 5)
        {
         continue;
        }

        for(j = 1; j <= 6-i; j++)
        {
         printf("  ");
        }//starting printing *
        for(j = 1; j <= i; j++)
        {
         printf("* ");
        }
        printf("\n");
    }

    return 0;
}

