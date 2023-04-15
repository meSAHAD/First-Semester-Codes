//GOT PROBLEM
//doesn't print all the values

#include<stdio.h>
main()
{
 char *name;
 int length;
 char *cptr = name;
 name = "DELHI";
 printf("%s\n",name);

 while(*cptr != '\0')
 {
     printf("%c is stored at adress %u\n",*cptr,cptr);
     cptr++;
 }
 length = cptr - name;
 printf("\nLenght of string = %d\n",length);
 return 0;
}
