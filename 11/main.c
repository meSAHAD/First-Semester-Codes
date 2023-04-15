#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*This program computes the sum of the numbers from 1 to 5*/

    int num, sum, product;

    sum=0;
    product=1;

    for(num=1; num<6; num=num+1)
    {
        sum= sum=num;
        product=product*num;
    }
    printf("product and sum:%d, %d",product,sum);
    return 0;
}
