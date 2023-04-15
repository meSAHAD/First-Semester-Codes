#include <stdio.h>

/* this program has three function*/

void func1(void); /* prototypes */
void func2(void);

int main(void)
{

    func2();
    printf("3");
    return 0;
}
void func2(void)
{
    func2();
    printf("2 ");
}
void func1(void)
{
    printf("1 ");
}
