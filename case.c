#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 2 number :");
	scanf("%d%d",&a,&b);
	
	switch(a<b)
	{
		case 0:
			printf("A is greater than B");
			break;
		case 1:
			printf("A is lesser than B");
			break;
	}
}
