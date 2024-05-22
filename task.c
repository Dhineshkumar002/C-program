#include<stdio.h>
void main()
{

	int num1;
	int num2;
	
	float a;
	float b;
	
	//increament
	printf("Enter a number :");
	scanf("%d",&num1);
	num2=num1++;
	printf("Increament value is :%d\n",num2);
	printf("The post increament is :%d\n",num1);

	printf("Enter a number :");
	scanf("%d",&num1);
	num2=++num1;
	printf("Increament value is :%d\n",num2);
	printf("The pre increament is :%d\n",num1);
	
	//decreament
	printf("Enter a number :");
	scanf("%d",&num1);
	num2=num1--;
	printf("Decreament value is :%d\n",num2);
	printf("The post decreament is :%d\n",num1);
	
	printf("Enter a number :");
	scanf("%d",&num1);
	num2=--num1;
	printf("Decreament value is :%d\n",num2);
	printf("The post decreament is :%d\n",num1);
	
	//Sign
	printf("Enter a number :");
	scanf("%d",&num1);
	num2=num1;
	printf("The value of =  :%d\n",num2);
	num2+=num1;
	printf("The value of += :%d\n",num2);
	num2-=num1;
	printf("The value of -= :%d\n",num2);
	num2*=num1;
	printf("The value of *= :%d\n",num2);
	num2/=num1;
	printf("The value of /= :%d\n",num2);
	num2%=num1;
	printf("The value of %= :%d\n",num2);
	
	
	//decimal sign
	printf("Enter a decimal number :");
	scanf("%f",&a);
	b=a;
	printf("The value of =  :%f\n",b);
	b+=a;
	printf("The value of += :%f\n",b);
	b-=a;
	printf("The value of -= :%f\n",b);
	b*=a;
	printf("The value of *= :%f\n",b);
	b/=a;
	printf("The value of /= :%f\n",b);
}
