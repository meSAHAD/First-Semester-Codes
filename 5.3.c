#include <stdio.h>
#include <ctype.h>

void main()
{
char alphabet;

printf("Enter an alphabet");
 putchar('\n'); /* move to next line */

alphabet = getchar();

if (islower (alphabet))

putchar (toupper(alphabet));/* Reverse and display */

else

putchar (tolower(alphabet)); /* Reverse and display */
}
