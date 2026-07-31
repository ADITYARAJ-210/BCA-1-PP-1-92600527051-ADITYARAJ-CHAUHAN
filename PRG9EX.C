#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	clrscr();
	printf("enter a number : ");
	scanf("%d",&a);
	if(a>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	getch();
}