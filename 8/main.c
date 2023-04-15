#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* this program forms the basis for an additional drill

. it displays two numbers and asks the user what the asnwer is
. the program then tells if the answer is right or wrong*/

     int answer;

     printf("what is 10+14?\n ");
     scanf("%d", &answer);

     if
        (answer==10+14) printf("\nRight");
     else
        printf("\nYou're wrong. Please try again");

    return 0;
}
