#include<stdio.h>

main()
{
    int x=10;
    int y=10;
    int *p1=&x, *p2 = &y;
    printf("%d %d %d %d",(*p1)++,--(*p2),*p1+*p2,++(*p2)-*p1);

    return 0;
}
