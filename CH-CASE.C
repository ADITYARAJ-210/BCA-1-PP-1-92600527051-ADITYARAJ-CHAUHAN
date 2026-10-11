#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	clrscr();
	printf("enter the character : ");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("uppercase");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("lowercase");
	}
	getch();
}
