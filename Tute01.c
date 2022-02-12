/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main()
{
  int value1, value2, value3, sum, avg;
	printf("Enter student mark for subject 1: ");
	scanf("%d",&value1);
	printf("Enter student mark for subject 2: ");
	scanf("%d",&value2);
	printf("Enter student mark for subject 3: ");
	scanf("%d",&value3);
	
	sum = value1 + value2 + value3;
	printf("Total mark is %d\n", sum);
	
	avg = sum / 3;
	printf("Average mark of the student %d\n", avg);
	
	return 0;
}

