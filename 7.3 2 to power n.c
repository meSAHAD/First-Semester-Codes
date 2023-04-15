#include<stdio.h>
#include<math.h>

void main()
{
    int a,i,n,result;
    a=2;
    printf("Enter the value till you wanna see the answer: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        result=pow(2,i);
        printf("2 to the power %d = %d\n",i,result);
    }
}
