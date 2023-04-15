#include<stdio.h>
int main()
{
  int i,j;
  int A[3] [4] ;
  for(i=0;i<3;i++)
  {
      printf("\t");// it's not needed
      for(j=0;j<4;j++)
     {

      printf("A[%d] [%d] :",i,j);//correction on here
        scanf("%d",&A[i][j]);}

    printf("\n");
  }//put } inside for loop
    for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            printf("%d\t",A[i] [j]);//put /t for space between integers
        }
        printf("\n");
    }

}
