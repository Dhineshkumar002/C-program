#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter the mark :");
	scanf("%d",&a);
	
	if(a>=90)
	{
		printf("A+ Grade");
	}
	else if(a>=80) 
	{
		printf("A Grade");
	}
	else if(a>=70)
	{
		printf("B Grade");
	}
	else if(a>=60)
	{
		printf("C Grade");
	}
	else if(a>=50)
	{
		printf("D Grade");
	}
	else{
		printf("Better Luck Next Time");
	}
}
