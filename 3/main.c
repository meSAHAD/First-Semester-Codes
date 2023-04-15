#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Enter your first number ");
    scanf("%d",&a);

    printf("Enter your second number ");
    scanf("%d",&b);


    printf("\nResult of addition is %d\n", a+b);
    printf("Result of subtraction is %d\n",a-b);
    printf("Result of multiplication is %d\n",a*b);
    printf("Result of division is %d",a/b);

    return 0;
}
