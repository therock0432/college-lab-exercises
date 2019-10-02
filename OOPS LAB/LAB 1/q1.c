#include<stdio.h>
int main()
{
    long long int i,j;
    scanf("%d %d",&i,&j);
    	long long int k=i%j;
    	if(k==0)
    		printf("%d\n",i+j);
    	else
       {
           i=i+(j-k);
    		printf("\n%d",i);
}
      return 0;
}
