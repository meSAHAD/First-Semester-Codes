#include <stdio.h>
int main()
{
    int a[100], sum = 0;
    for(int i = 0; ;i++)
        {
        scanf("%d", &a[i]);
        if(a[i] < 0) break;
        sum++;
	    }

	for(int i = 0; i < sum; i++)
    {
      printf("%d ", a[i]);
    }

	return 0;
}
