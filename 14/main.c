#include <stdio.h>

int main()
{
    int i,count,f;
    float weight, height;
    count =0;

    printf("Enter weight and weight for 10 boys ");

    for(i=1; i<=10;i++)
    {
        scanf("%f%f",&weight,&height);
        if(weight<50&&height>170)
            count=count+1;
    }
    printf("Number of boys with weight<50 kg and weight >170 cm: %d\n",count);
    return 0;
}
