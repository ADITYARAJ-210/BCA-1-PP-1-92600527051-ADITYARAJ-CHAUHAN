//prog. for calc of marks of 5 subs
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("\n\n enter the first marks : ");
	scanf("%d",&a);
	printf("\n\n enter the seacond marks : ");
	scanf("%d",&b);
	printf("\n\n enter the third marks : ");
	scanf("%d",&c);
	printf("\n\n enter the fourth marks : ");
	scanf("%d",&d);
	printf("\n\n enter the fifth marks : ");
	scanf("%d",&e);
	clrscr();
	printf("\n\n first marks : %d",a);
	printf("\n\n seacond marks : %d",b);
	printf("\n\n third marks : %d",c);
	printf("\n\n fourth marks : %d",d);
	printf("\n\n fifth marks : %d",e);

	f=a+b+c+d+e;
	printf("\n\n\n total marks : %d",f);


	getch();
}