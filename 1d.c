#include<stdio.h>
void main()
{
    int m = 100;
    int *p1=&m;
    int **p2=&p1;
    printf("%d",**p2);
}
