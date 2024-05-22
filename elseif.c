#include<stdio.h>
void main()
{
	int a;
	int b;
	char c;
	
	printf("Enter a symbol :");
	scanf("%c",&c);
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter a 2 number :");
	scanf("%d",&b);
	
	if(c=='+')
	{
		printf("Addition :%d",a+b);
	}
	else if(c=='-'){
		printf("subraction :%d",a-b);
	}
	else if(c=='*'){
		printf("subraction :%d",a-b);
	}
	else if(c=='/'){
		printf("subraction :%d",a*b);
	}
	else if(c=='%'){
		printf("subraction :%d",a/b);
	}
	else{
		printf("INVALID SYMBOL");
	}
	
}
