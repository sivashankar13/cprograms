#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("Postive");
	}
	else if(n<0)
	{
		printf("Negative");
	}
	else
	{
		printf("Zero");
	}
	return 0;
}
