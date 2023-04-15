#include <stdio.h>
int main()
{
    int n, DigitSum = 0;
    scanf("%d", &n);

    while(n){
        DigitSum += n % 10;
        n /= 10;
    }

    printf("Sum of the digit: %d\n", DigitSum);
    return 0;
}
