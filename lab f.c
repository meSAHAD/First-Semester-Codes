#include<stdio.h>

int *add()
{
    int x; int y; int z; int t;
    x=1;y=2;
    z= x+y;
    t=&z;
    return t;
}
void main()
{
    int *p;
    p=add();
    printf("%d",*p);
}
