#include<stdio.h>

int main()
{
    int sum = 0;
        int n;
        scanf("%d",&n);
        for (int i = 1; i <= n; i++) {
            sum += (i * (i % 10));
            printf("%d\n",sum);
        }
        printf("T%d",sum);
        int g=1%10;
        printf("%d",g);

}
