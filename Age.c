#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a Age :");
	scanf("%d",&a);
	
	if(18>=a){
		printf("This candidate is not eligible to vote");
	}
	else{
		printf("This candidate is eligible to vote");
	}
}
