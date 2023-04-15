include<stdio.h>

main()
{
    int i, age, num;
    scanf("%d",&num);
    Max_age=1;
    Min_age=99;

    for(i=1;i<=num;i++)
    {
        scanf("%d"&age);
        if(age>Max_age) Max_age=age
            else if(age<Min_age) Min_age=age
    }
    printf("%d %d", Max_age, Min_age)
}
