#include<stdio.h>
int main()
{
   int t;
    scanf("%d",&t);
   for(int i=1; i<=t; i++)
   {
    printf("Case %d: ",i);
    int n,k,sum=0;
    scanf("%d%d",&n,&k);
    for(int j=1; j<=n; j++)
    {
        sum=sum+j;

    }
    if(sum<k)  printf("NO\n");
    else  printf("YES\n");

   }
}
