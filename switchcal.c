#include<stdio.h>
void main()
{
	char c;
	int a,b;
		
	printf("Enter a symbol :");
	scanf("%c",&c);
	printf("Enter 2 number :");
	scanf("%d%d",&a,&b);
	
	switch(c)
	{
		case '+':
			printf("The value is :%d\n",a+b);
			break;
		case '-':
			printf("The value is :%d",a-b);
			break;
		case '*':
			printf("The value is :%d\n",a*b);
			break;
		case '/':
			printf("The value is :%d\n",a/b);	
			break;
		case '%':
			printf("The value is :%d\n",a%b);	
			break;	
	}
	
}
