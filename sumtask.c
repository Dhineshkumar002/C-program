#include<stdio.h>
int add();
int sub();
int mul();
int div();
void main()
{
	int addtion=add();
	int subration=sub();
	int multiplication=mul();
	int division=div();
	printf("The addtion value is :%d\n",addtion);
	printf("The subration value is :%d\n",subration);
	printf("The multiplication value is :%d\n",multiplication);
	printf("The division value is :%d\n",division);
}
int add()
{
	int a=10,b=20,c;
	c= a+b;
	return c;
}
int sub()
{
	int a=100,b=20,c;
	c= a-b;
	return c;
}
int mul()
{
	int a=5,b=6,c;
	c= a*b;
	return c;
}
int div()
{
	int a=20,b=10,c;
	c= a/b;
	return c;
}

