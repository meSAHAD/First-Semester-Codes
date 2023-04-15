/* Divide the first number by the second. */
#include <stdio.h>
int main(void)
{
 int a, b;
 printf("Enter two numbers: ");
 scanf("%d%d", &a, &b);
 if(b) printf("%f\n",(float)a/b);
 else printf("Cannot divide by zero.\n");
 return 0;
}
