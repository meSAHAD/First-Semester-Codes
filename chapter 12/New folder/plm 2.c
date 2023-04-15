#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int binary = 0, i = 1;
    while(n){
        binary += (n % 2) * i;
        n /= 2;
        i *= 10;
    }

    printf("Binary value is : %d\n", binary);

	return 0;
}

