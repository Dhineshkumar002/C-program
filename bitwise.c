#include<stdio.h>
void main()
{
	int a;
	int b;
	
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter a other number :");
	scanf("%d",&b);
	
	printf("The value for a&b :%d\n",a&b);
	printf("The value for a|b :%d\n",a|b);
	printf("The value for ~a :%d\n",~a);
	printf("The value for a^b :%d\n",a^b);
	
	printf("The value for a<<1 :%d\n",a<<1);
	printf("The value for a>>1 :%d\n",a>>1);
}
