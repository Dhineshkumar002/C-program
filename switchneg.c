#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	switch(0<a)
	{
		case 0:
			printf("Negative");
			break;
		case 1:
			printf("Positive");	
	}
}
