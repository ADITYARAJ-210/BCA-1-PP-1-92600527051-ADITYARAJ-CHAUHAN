//prog. for square and cube
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,square,cube;
	clrscr();
	printf("enter the number : ");
	scanf("%d",n);
	square = n / (1.0 / n), cube = square / (1.0 / n);
	printf("square = %d\n cube = %d",square,cube);
}