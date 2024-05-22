#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	switch(a%2==0)
	{
		case 0:
			printf("The number is odd");
			break;
		case 1:
			printf("The number is even");
			break;
	}
}
