#include<stdio.h>
void main()
{
	int a,b;
	
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter a other number :");
	scanf("%d",&b);
	
	printf("(a<b) && (a>b) :%d\n",(a<b) && (a>b));
	printf("(a<b) || (a>b) :%d\n",(a<b) || (a>b));
	printf("(a<b) || (a<b) :%d\n",(a<b) || (a>b));
}
