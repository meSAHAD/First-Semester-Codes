#include<stdio.h>
int main()
{
    int i, FirstInputarray[100], SecondtInputarray[100],result[i];
    freopen("c-11.txt","r",stdin);
    for (i=0;i<5;i++)
    {
        scanf("%d",&FirstInputarray[i]);
    }
    for (i=0;i<5;i++)
    {
        scanf("%d",&SecondtInputarray[i]);
    }
    for (i=0;i<5;i++)
    {
        result[i]=FirstInputarray[i]+SecondtInputarray[i];
        printf("%d ",result[i]);
    }
}
