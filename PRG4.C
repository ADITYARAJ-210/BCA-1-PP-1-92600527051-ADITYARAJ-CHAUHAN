//prog. for weight calc
#include<stdio.h>
#include<conio.h>
void main()
{
	float kg,g;
	clrscr();
	printf("enter the kg weight : ");
	scanf("%f",kg);
	g = kg * 1000;
	printf("the weight in grams is : %f",g);
	getch();
}