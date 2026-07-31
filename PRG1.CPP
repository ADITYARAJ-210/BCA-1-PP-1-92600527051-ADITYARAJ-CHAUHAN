#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;    // variable declaration
	clrscr();
	printf("enter the first value =");
	scanf("%d",&x);
	printf("enter the seacond value =");
	scanf("%d",&y);
	z=x+y;
	printf("your answer is = %d",z);
	getch();
}