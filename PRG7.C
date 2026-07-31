//prg of "if/else"
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	printf("enter a number : ");
	scanf("%d",&a);
	b = a % 2;
	if(b==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	getch();
}