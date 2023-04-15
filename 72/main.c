#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a, b;
 printf("Enter two numbers: ");
 scanf("%f%f", &a, &b);
 if(b)
 printf("%f\n", a/b);
 else
    printf("Cannot divide by zero.\n");
    return 0;
}
