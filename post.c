#include<stdio.h>
void main()
{
	int a;
	int b;
	
	printf("Enter a number :");
	scanf("%d",&a);
	b=a--;
	printf("The increment value is:%d\n",b);
	printf("A value is :%d",a);
}
