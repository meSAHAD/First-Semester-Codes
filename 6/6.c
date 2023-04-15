#include <stdio.h>
#include <stdlib.h>

/* this program has three function*/

void func1(void); /* prototypes */
void func2(void);
int main(void)
{
    func1();
    func2();
    printf("3");
    return 0;
}
void func2(void)
{
    printf("2 ");
}
void func1(void)
{

    printf("1 ");
}

