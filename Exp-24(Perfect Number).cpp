#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any Number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("%d is a Perfect Number ...",n);
	else
		printf("%d is Not a Perfect Number .....",n);
	return 0;
}
