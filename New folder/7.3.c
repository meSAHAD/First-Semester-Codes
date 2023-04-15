#include <stdio.h>
int main()
{
    int m, n1 = 0, n2 = 1, n3 = 1;
    scanf("%d", &m);

    do{
        printf("%d ", n3);
        n3 = n1 + n2;
        n1 = n2; n2 = n3;
        m--;
    } while(m);

    printf("\n");
    return 0;
}
