include <stdio.h>

int main(void) {
	char a;
	printf("enter the character\n");
	scanf("%c",&a);
	if((a>='A' && a<='Z') || (a>='a' && a<='z'))
	{
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		{
			printf("Vowel");
			
		}
		else
		{
			printf("Consonant");
		}
	}
	else
	{
		printf("invaled");
	}
	// your code goes here
	return 0;
}
