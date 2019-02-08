#include <stdio.h>

int main(void) {
	char a;
	printf("enter the character\n");
	scanf("%c",&a);
	if((a>='A' && a<='Z') || (a>='a' && a<='z'))
	{
		printf("Alphabet");
	}
	else
	{
		printf("invaled");
	}
	// your code goes here
	return 0;
}
