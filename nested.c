#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter a number");
	scanf("%d",&b);
	printf("Enter a number");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("A is lesser than C");
		}
		else{
			printf("C is lesser than A");
		}
	}
	else{
		if(b<c){
			printf("B is lesser than C"); 
		}
	}
}
