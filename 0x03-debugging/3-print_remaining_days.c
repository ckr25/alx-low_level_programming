#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are left in the year taking into account leap years
 * @month - month in number format
 * @day - day of the month
 * @year - year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		int leap_days = 366;

		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("day of the year: %d\n", day);
		printf("remaining days: %d\n", leap_days - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			int standard_days = 365;

			printf("day of the year: %d\n", day);
			printf("remaining days: %d\n", standard_days - day);
		}
	}
}
