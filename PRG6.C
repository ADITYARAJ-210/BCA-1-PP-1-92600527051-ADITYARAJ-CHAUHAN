//swaping number
#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	clrscr();
	printf("\n enter first value : ");
	scanf("%d",&x);

	printf("\n enter the seacond value : ");
	scanf("%d",&y);
	printf("\n before interchange : x = %d , y = %d",x,y);

	x = x + y;
	y = x - y;
	x = x - y;

	printf("\n after interchange : x = %d , y = %d",x,y);
	getch();
}