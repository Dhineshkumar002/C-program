#include<stdio.h>
void main()
{
	char dd;
	printf("Enter a Alphabet :");
	scanf("%c",&dd);
	
	switch(dd)
	{
		case 'a':
			printf("A is vowel\n");
			break;
		case 'e':
			printf("E is vowel\n");
			break;
		case 'i':
			printf("I is vowel\n");
			break;
		case 'o':
			printf("O is vowel\n");
			break;
		case 'u':
			printf("U is vowel\n");
			break;
		default :
			printf("INVALID");
	}
}
