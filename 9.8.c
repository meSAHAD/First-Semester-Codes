#include <stdio.h>
int main()
{
    int i, j , k;
    char f_name[10] = {"SADEKUR"};
    char s_name[10] = {"RAHMAN"};
    char l_name[10] = {"SAHAD"};
    char name[30];

    for(i = 0; f_name[i] != '\0'; i++){
        name[i] = f_name[i];
    }
    name[i] = ' ';
    for(j = 0; s_name[j] != '\0'; j++){
        name[i+j+1] = s_name[j];
    }
    name[i+j+1] = ' ';
    for(k = 0; l_name[k] != '\0'; k++){
        name[i+j+k+2] = l_name[k];
    }
    name[i+j+k+2] = '\0';

    printf("%s\n", name);

    return 0;
}
