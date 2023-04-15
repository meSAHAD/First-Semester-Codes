#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*This program prints numbers between 'a' to 'b' that can be divided by 17 */

    int a, b, c;

    printf("enter your first value");
    scanf("%d",&a);
    printf("enter your second value");
    scanf("%d",&b);

    for(c=a; c<=b; c++)
    {


        if(c%17==0)
            printf("%d, ",c);



    }


    return 0;
}
