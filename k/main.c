#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
    if(b>c)
       printf("%d is greater",a);

    else
            printf("%d is greater",c);
   }

    else
        printf("%d is greater",b);
        return 0;


}
