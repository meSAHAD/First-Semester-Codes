#include <stdio.h>
int main()
{
    int i, j, a, space = 2;

    for(int i = 1; i <= 5; i++){
        a = 0;
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for(j = 1; j < i; j++){
            printf("%d ", ++a);
            if(a == i){
                break;
            }
        }
        for(j = a-1; j >= 1; j--){
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}
