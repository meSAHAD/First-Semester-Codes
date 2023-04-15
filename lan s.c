#include<stdio.h>
void main()
{
    int i;
    char str1[100];
    char str2[100];
    scanf("%s",str2);
    for(i=0;str2[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;

}
