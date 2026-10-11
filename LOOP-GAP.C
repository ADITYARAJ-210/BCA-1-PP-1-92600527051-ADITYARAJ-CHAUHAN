#include<stdio.h>
#include<conio.h>

int main ()
{
	char i,num;
	clrscr();

	printf("enter the number : ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		printf(" %d %d",i,0);
	}
	return 0;
}