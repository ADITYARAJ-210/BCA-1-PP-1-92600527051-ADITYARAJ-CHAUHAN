//area of circle
#include <stdio.h>
#include <conio.h>

int main() {
    float radius, area;
    clrscr();
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("*******************************");
    printf("\n*                             *");
    printf("\n*  Area of the circle = %.2f  * \n", area);
    printf("*                             *");
    printf("\n*******************************");
    getch();
    return 0;
}