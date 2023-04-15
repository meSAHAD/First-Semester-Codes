#include<stdio.h>

main()
{
    int i, total_std, age;
    printf("Enter total number of students ");
    scanf("%d",&total_std);
    printf("Enter age ");
    printf("\n");
    for(i=1;i<=total_std;i++)
    {
        scanf("%d",&age);
        if(age>20&&age<99) printf("\n%d",age);
    }
    return 0;

}
