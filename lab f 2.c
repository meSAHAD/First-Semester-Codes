#include <stdio.h>

int* add(int x, int y)
{
    int  z, *t;
    z = x+y;
    t = &z;
    return t;
}
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *p;
    p = add(x, y);
    printf("%d", *p);
}
