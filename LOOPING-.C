#include<stdio.h>
#include<conio.h>

int main ()
{
	int i,num;
	clrscr();

	printf("enter the number : ");
	scanf("%d",&num);

	for(i=5;i<=num;i=i+5)
	{
		printf(" %d",i);
	}
	return 0;
}