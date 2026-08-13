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
		printf("th highest number is %d",a);
		printf("\n%d", a+b+c);
	}
	else
	{
		printf("the highest number is %d",b);
		printf("\n%d", a*b*c);
	}
    }
    else
    {
	if (b > c)
	{
		printf("%d is the highest",b);
		printf("\n%d", a-b-c);
	}
	else
	{
		printf("%d is the highest", c);
		printf("\n%d", a*b*c);
	}
    }
    getch();
    return 0;
}
