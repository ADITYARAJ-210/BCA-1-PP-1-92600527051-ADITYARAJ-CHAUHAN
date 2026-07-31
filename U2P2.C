// prog. for finding avg
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter the 1st number : ");
	scanf("%d",&a);
	printf("enter the 2nd number : ");
	scanf("%d",&b);
	printf("enter the 3rd number : ");
	scanf("%d",&c);

	d=a+b+c;
	e=d/3;
	printf("the avg of three number is %d",e);
	getch();
	return 0;
}