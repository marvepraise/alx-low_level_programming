#include "main.h"

/**
 * largest_number - Prints the largest of 3 numbers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * @c: third integer
 *
 * Return: returns the largest number
 */

int largest_number(int a, int b, int c)
{

	int largest;
	if (year % 4 == 0 || ((year % 100 == 0)))
	{
		day++;
	}

	printf("day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
}
else
{
	if (month == 2 && day == 60)
	{
		printf("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
