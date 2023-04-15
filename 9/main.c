#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*This program converts feet to meters or meters to feet*/

    float num;
    int choice;

    printf("Enter the value: ");
    scanf("%f",&num);

    printf("Enter choice\n");
    printf("1: Feet to meter\n2: Meter to feet");

    scanf("%d", &choice);

    if
        (choice==1)
        printf("Answer is %f", num/3.28);
    else
        printf("Answer is %f", num*3.28);

    return 0;
}
