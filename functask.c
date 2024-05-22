#include<stdio.h>
int sample_func();
void main(){
	int a=sample_func();
//	if(0<a)
//	{
//		printf("Positive");
//	}
//	else if(a==0){
//		printf("Equal");
//	}
//	else{
//		printf("Negative");
//	}
}

int sample_func()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
 return a;
}
