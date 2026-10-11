#include <stdio.h>
#include <conio.h>

void main()
{
	float salary,gross_salary,hr,ta,da,pf;
	clrscr();
	printf("enter the salary : ");
	scanf("%f",&salary);
	if(salary > 5000)
	{
		hr = salary * 5 /100;
		ta = salary * 6 /100;
		da = salary * 4 / 100;
		pf = salary * 5 / 100;
		gross_salary = salary + hr + ta + da - pf;
		printf("gross salary : %.2f",gross_salary);
	}
	else
	{
		hr = salary * 4 / 100;
		ta = salary * 5 / 100;
		da = salary * 3 / 100;
		pf = salary * 4 / 100;
		gross_salary = salary + hr + ta + da - pf;
		printf("gross salary : %.2f",gross_salary);
	}
	getch();



}
