#include<stdio.h>
#include<math.h>
void main()
{
    float y;
    int x,i;
    printf("X Sin(X)\n");
    for(i=0; i<=180; i+=15)
    {
        y=sin(i);
        printf("%d\t%f\n",i,y);
    }
}
