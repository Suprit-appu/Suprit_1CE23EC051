#include<stdio.h>
int main()
{
	char g;
	scanf("%c",&g);
	if(g>='a' && g<='z')
	{
		g=g-32;
		printf("%c",g);
	}
	else if(g>='A' && g<='Z')
	{
		g=g+32;
		printf("%c",g);
	}
	else
	{
		printf("Invalid input");
	}
	getchar();
	getchar();		
}