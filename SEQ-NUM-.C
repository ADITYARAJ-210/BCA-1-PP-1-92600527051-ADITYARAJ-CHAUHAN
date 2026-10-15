#include <stdio.h>
#include <conio.h>

void main ()
{
	int i,j=10;
	clrscr();
	for(i = 1 ; i<=10 ; i++)
	{
		printf("\t%d %d",i,j);
		j--;
	}
	getch();
}