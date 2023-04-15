#include <stdio.h>
int main()
{
    char str1[80], str2[80];
    scanf("%s", str2);

    int i = 0;
    for(i = 0; str2[i] != '\0'; i++){str1[i] = str2[i];}

    str1[i] = '\0';

    printf("%s\n", str1);

    return 0;
}
