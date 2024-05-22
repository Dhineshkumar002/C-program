#include<stdio.h>
void sample_func(); //function declaration or protype
void main()
{
	sample_func();
	sample_func();
	printf("Thank you\n");
//	int result = sample_func2();
	printf("The addition value is :%d",sample_func2());
}

// no arg passed & no return value

void sample_func() //function definition
{
	printf("Welcome\n");	
}


// NO ARG PASSED BUT RETURN A VALUE

int sample_func2()
{
	int a=10,b=20,c;
	c= a+b;
	return c;
}
	
