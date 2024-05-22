#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter your age :");
	scanf("%d",&age);
	
	switch(18>age)
	{
		case 0:
			printf("This candidate is eligible to vote");
			break;
		case 1:
			printf("This candidate is not eligible to vote");
			break;
	}
}
