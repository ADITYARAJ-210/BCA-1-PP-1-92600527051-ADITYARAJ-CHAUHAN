#include <stdio.h>
#include <conio.h>

void main()
{
	int day ;
	clrscr();
	printf("enter the number of the day : ");
	scanf("%d",&day);
	if(day == 1)
	{
		printf("Monday");
	}
	else if (day == 2)
	{
		printf("Tuesday");
	}
	else if (day == 3)
	{
		printf("Wednesday");
	}
	else if (day == 4)
	{
		printf("Thursday");
	}
	else if (day == 5)
	{
		printf("Friday");
	}
	else if (day == 6)
	{
		printf("Saturday");
	}
	else
	{
		printf("invalid number");
	}
	getch();
}