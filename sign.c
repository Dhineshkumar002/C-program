#include<stdio.h>
void main()
{
	int a;
	int b;
	printf("Enter a number :");
	scanf("%d",&a);
	b=a;
	printf("b = a is %d\n",b);
	b+=a;
	printf("b += a is %d\n",b);
	b-=a;
	printf("b *= a is %d\n",b);
	b*=a;
	printf("b /= a is %d\n",b);
	b/=a;
	printf("b %= a is %d\n",b);
	b%=a;
}
