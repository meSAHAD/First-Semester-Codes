/* A program with double functions */
#include <stdio.h>
#include <stdlib.h>

void funcl(void); /* prototype for funcl() */
int main(void)
{
  printf("I ");
   funcl();
   printf(" C");
    return 0;
}
void funcl(void)
{
   printf("like");
}
