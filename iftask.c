#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number");
	scanf("%d",&a);

	if(a%2==0)
	{
		//printf("This is even number");
			if(a%4==0){
				print("The number is divisible by 4");
			}
			else{
				printf("The number is not divisible by 4");
			}
				
	}
	else{
		//printf("This is odd number");
		
			if(a%3==0){
				print("The number is divisible by 3");
			}
			else{
				printf("The number is not divisible by 3");
			}
	}
}
