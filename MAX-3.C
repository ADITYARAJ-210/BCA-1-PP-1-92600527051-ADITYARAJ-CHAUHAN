#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    clrscr();

    printf("Enter the first numbers: ");
    scanf("%d", &a);
    printf("Enter the second numbers: ");
    scanf("%d", &b);
    printf("Enter the third numbers: ");
    scanf("%d", &c);

    if (a > b)
    {
	if (a > c)
	{
	    printf("%d is the highest", a);
	}
	else
	{
	    printf("%d is the highest", c);
	}
    }
    else
    {
	if (b > c)
	{
	    printf("%d is the highest", b);
	}
	else
	{
	    printf("%d is the highest", c);
	}
    }
    getch();
    return 0;
}