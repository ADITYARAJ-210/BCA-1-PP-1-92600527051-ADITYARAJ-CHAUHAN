#include <stdio.h>
#include <conio.h>

void main()
{
	int fst_num , sec_num ;
	clrscr();
	printf("enter the first number : ");
	scanf("%d",&fst_num);
	printf("enter the second number : ");
	scanf("%d",&sec_num);
	if(fst_num % sec_num == 0 )
	{
		printf("divisible");
	}
	else
	{
		printf("not divisible");
	}
	getch();
}