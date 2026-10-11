#include <stdio.h>
#include <conio.h>

void main ()
{
	char ch;
	clrscr();
	printf("enter the character : ");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
	}
	printf("converted character %c",ch);
	getch();
}