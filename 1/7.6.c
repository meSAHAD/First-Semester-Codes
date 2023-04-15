#include<stdio.h>
main()
{
    int i, age,count=0;
    printf("Enter age");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&age);
        if(age>=50&&age<=60)count=count+1;
    }
    printf("\nNumber of people inside 50 to 60 age range: %d",count);
    return 0;
}
