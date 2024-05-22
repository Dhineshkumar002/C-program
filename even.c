#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("This is even number");
	}
	else{
		printf("This is odd number");
	}
}
