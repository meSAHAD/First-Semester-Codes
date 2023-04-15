#include <stdio.h>
int main()
{
    int arr[100], i, count = 0;

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
        if(arr[i] >= 50 && arr[i] <= 60){
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
