#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
	{
		printf("The number is prime");
	}
	else{
		printf("The number is not prime");
	}
}
