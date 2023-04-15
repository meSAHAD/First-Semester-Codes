#include<stdio.h>
#include<math.h>

int main(void)
{
    /* This program prints the square of numbers from 1 to 10 */
    int sqrs [10];
    int i;

    for(i=1;i<11;i++)
    {
        sqrs[i-1]=i*i;
    }
    for (i=0;i<10;i++) printf("%d ",sqrs[i]);
    return 0;

}
