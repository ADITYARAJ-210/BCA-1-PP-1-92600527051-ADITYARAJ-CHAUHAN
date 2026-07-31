
// check if no. is positive or negative
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	printf("enter a number : ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("the number is positive");
	}
	else
	{
		printf("the number is negative");
	}
	getch();
}