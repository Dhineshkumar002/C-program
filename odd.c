#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	if(0<a)// 0<a a%2==0
	
	{
		printf("Positive");
	}
	else if(a==0){
		printf("Equal");
	}
	else{
		printf("Negative");
	}
}
