#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	clrscr();
	printf("enter the character : ");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
	   ch == 'A' || ch == 'e' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("vovels");
	}
	else
	{
		printf("not vovels");
	}
	getch();
}
