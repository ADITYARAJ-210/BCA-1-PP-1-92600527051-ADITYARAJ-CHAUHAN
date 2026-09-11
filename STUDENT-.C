#include <stdio.h>
#include <conio.h>

void main()
{
    int roll,marks1,marks2,marks3,marks4,marks5,marks6,total;
    float percentage;
    clrscr();

    printf("Student Performance Analysis\n");

    // Accept student details
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks in Subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks in Subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks in Subject 3: ");
    scanf("%d", &marks3);

    printf("Enter marks in Subject 4: ");
    scanf("%d", &marks4);

    printf("Enter marks in Subject 5: ");
    scanf("%d", &marks5);

    printf("Enter marks in Subject 6: ");
    scanf("%d", &marks6);


    // Calculate total marks
    total = marks1 + marks2 + marks3 + marks4 + marks5 + marks6;

    // Calculate percentage
    percentage = total * 100 / 600;

    // Display student details
    printf("\nRoll Number: %d", roll);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f", percentage);

    // Check grade
    if (percentage >= 75)
    {
	printf("\nGrade: A");
    }
    else if (percentage >= 60)
    {
	printf("\nGrade: B");
    }
    else if (percentage >= 50)
    {
	printf("\nGrade: C");
    }
    else if (percentage >= 35)
    {
	printf("\nGrade: D");
    }
    else
    {
	printf("\nGrade: F");
    }

    // Check pass or fail
    if (percentage >= 35)
    {
	printf("\nStatus: PASS");
    }
    else
    {
	printf("\nStatus: FAIL");
    }

    getch();
}