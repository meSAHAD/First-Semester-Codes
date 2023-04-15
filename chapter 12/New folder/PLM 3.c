 #include<stdio.h>
 main()
 {
  int n,i=3;
  scanf("%d",&n);
  int binary[4]={0,0,0,0};
  if(n<=15){
  while(n>0)
    {
        binary[i]=n%2;
        n/=2;
        i--;
    }
    for(int i=0;i<4;i++){

    printf("%d",binary[i]);
    }
  }
 }

