#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int is_leap_year = 0;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		is_leap_year = 1;
	}

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month]
			{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
			return;
			}

			int _day = day;

			for (int i = 1; i < month; i++)
			{
			_day += days_in_month[i];
			}

			if (is_leap_year && month > 2)
			{
			_day++;
			}

			printf("Day of the year: %d\n", _day);
printf("Remaining days: %d\n", is_leap_year ? 366 - _day : 365 - _day);
}
