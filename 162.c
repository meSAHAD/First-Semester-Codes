#include <stdio.h>
char *match(char c, char *s)
{
 while(c!=*s && *s) s++;
 return(s);
}

int main(void)
{
 char s[80], *p, ch;
 gets(s);
 ch = getchar();
 p = match(ch, s);
 if(*p) /* there is a match */
 printf("%s ", p);
 else
 printf("No match found.");
 return 0;
}
