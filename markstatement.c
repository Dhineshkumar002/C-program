#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter the mark :");
	scanf("%d",&a);
	
	if(a >=90 && a<=100)
	{
		printf("A+ Grade");
	}
	else if(a >=80 && a<=90) 
	{
		printf("A Grade");
	}
	else if(a >=70 && a<=80)
	{
		printf("B Grade");
	}
	else if(a >=60 && a<=70)
	{
		printf("C Grade");
	}
	else if(a >=50 && a<=60)
	{
		printf("D Grade");
	}
	else{
		printf("Better Luck Next Time");
	}
}
