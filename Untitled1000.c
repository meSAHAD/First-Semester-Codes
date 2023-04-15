#include<stdio.h>
int main()
{
    char op;
    double num1, num2;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter the two numbers:");
    scanf("%lf %lf",&num1,&num2);
    switch(op)
    {  case'+':
    printf("%lf+%lf=%lf",num1,num2,(num1+num2));
    break;
    case'-':
    printf("%lf-%lf=%lf",num1,num2,(num1-num2));
    break;
    case'*':
    printf("%lf*%lf=%lf",num1,num2,(num1*num2));
    break;
    case'/':
    if(num2!=0)
    printf("%lf/%lf=%lf",num1,num2,(num1/num2));
    else
    printf("Invalid");
    break;
    default:
    printf("Invalid Operator");
    }
    return 0;
}
