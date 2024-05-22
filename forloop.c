#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter a number :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(i%2==0){
			printf("The even number is:%d\n",i);
		}
	}
}
