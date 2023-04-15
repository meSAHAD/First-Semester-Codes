#include<stdio.h>
void main()
{
    int i,j,row,colum;
    int a[40][40];
    printf("Entr number of rows: ");
    scanf("%d",&row);
    printf("Enter number of colums: ");
    scanf("%d",&colum);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=colum; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    }
