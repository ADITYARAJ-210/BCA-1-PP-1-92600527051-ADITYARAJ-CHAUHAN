#include <stdio.h>
#include<conio.h>
int main()
{
    float x, y, z, a;
   clrscr();

    printf("Enter length:\n ");
    scanf("%f", &x);

    printf("Enter breath:\n ");
    scanf("%f", &y);

    a=x*y;

    printf("area of rc %.2f",a);




    getch();
    return 0;
}
