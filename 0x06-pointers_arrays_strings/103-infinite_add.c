#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: the buffer that the function will use to store the result.
 * @size_r: the buffer size.
 *
 * Return: Always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int i = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int j;
	char temp;

	if (len1 >= size_r || len2 >= size_r)
	{
		return (0);
	}

	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		sum = carry;
		if (len1 > 0)
		{
			sum += n1[--len1] - '0';
		}
		if (len2 > 0)
		{
			sum += n2[--len2] - '0';
		}

		if (i < size_r - 1)
		{
			r[i++] = (sum % 10) + '0';
		}
		else
		{
			return (0);
		}

		carry = sum / 10;
	}

	r[i] = '\0';
	j = 0;
	i--;

	while (i > j)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i--;
		j++;
	}

	return (r);
}
