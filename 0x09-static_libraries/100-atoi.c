#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 *  * _atoi - convert a string to an integer.
 *   * @s: a string to be converted.
 *    *
 *     * Return: If there are no numbers in the string, the function must return 0
 *      */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
