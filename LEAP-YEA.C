#include <stdio.h>
#include <conio.h>

void main()
{
	int year;
	clrscr();
	printf("enter the year : ");
	scanf("%d",&year);
	printf("--------------\n");
	if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
	getch();
}
