#include<stdio.h>
main()
{
 int  n, sum=0, r;
 printf("Enter a number: ");
 //scanf("%d",&n);
 for (scanf("%d", &n); n != 0; n = n/10) { r = n % 10; sum = sum + r; }
 printf("Sum of digits of a number = %d\n", sum);
return 0;
}

