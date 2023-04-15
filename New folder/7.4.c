#include <stdio.h>
#include <math.h>
main()
{
    long long v;
    int p, r, n;
    printf("Enter Principal: ");
    scanf("%d", &p);

    printf("Enter Interest rate: ");
    scanf("%d", &r);

    printf("Enter Time (year): ");
    scanf("%d", &n);

    v = p*pow((1+r), n);

    printf("Investment of V: %d", v);
    return 0;
}
