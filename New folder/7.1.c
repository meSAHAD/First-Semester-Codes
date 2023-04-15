#include <stdio.h>
int main()
{
    int n, reverse = 0;
    scanf("%d", &n);

    while(n){
        reverse = reverse * 10 + (n%10);
        n /= 10;
    }

    printf("Reversed Number: %d\n", reverse);

    return 0;
}
