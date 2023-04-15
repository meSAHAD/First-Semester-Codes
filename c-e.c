#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,r,num=0,max=0;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        num=0;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            num++;

	        }
	        if(num>0 && num%2!=0)
	            b[i]=a[i];
	            else
	            b[i]=0;
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	          r=b[i]*b[j];
	          if(r>max)
	          max=r;
	        }
	    }
	    if(max>0)
	    printf("%d\n",max);
	    else
	    printf("0\n");
	}
	return 0;
}

