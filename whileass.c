#include<stdio.h>
void main()
{
	int i=1,sum=0;
	while(i<=15)
	{
		printf("%d\n",i);
		sum+=i;
		i++;
	}
	printf("The value is :%d",sum);
}
