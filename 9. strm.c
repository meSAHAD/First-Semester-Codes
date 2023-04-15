#include <stdio.h>
void main()
{
    char str1[50], str2[50];
    scanf("%s", str1);
    scanf("%s", str2);
    int i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        {
        i++;
        }

    if(str1[i] == '\0' && str2[i] == '\0'){printf("Strings are equal\n");}
    else  printf("Strings are not equal\n");
}
