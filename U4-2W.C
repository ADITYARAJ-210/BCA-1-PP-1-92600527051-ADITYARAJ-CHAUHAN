#include <stdio.h>
#include <conio.h>

void main ()
{
	int i,j;
	clrscr();
	i = 1;
	j=10;
	while(i<=10)
	{
		printf("\t%d %d",i,j);
		i++;
		j--;
	}
	getch();
}