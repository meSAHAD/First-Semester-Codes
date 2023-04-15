#include<stdio.h>

int main() {
    int n, ara[10];
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
            // For Array Input
        for (int j=0; j<10; j++) {
            scanf("%d", &ara[j]);
        }
        int a=1, d=1, k=0;
        while ((a==1 || d==1) && k<9) {
            if (ara[k] < ara[k+1]) {
                d=0;
            }
            else if (ara[k] > ara[k+1]) {
                a=0;
            }
            k++;
        }
        if(a == 1 || d == 1){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
            int temp;
            for (int p=0; p<10; p++) {
                for (int q=p+1; q<10;q++) {
                    if (ara[p] > ara[q]) {
                        temp = ara[p];
                        ara[p] = ara[q];
                        ara[q] = temp;
                    }
                }
            }
            for (int p=0; p<10; p++) {
                printf("%d ", ara[p]);
            }
            printf("\n");
        }
    }
}
