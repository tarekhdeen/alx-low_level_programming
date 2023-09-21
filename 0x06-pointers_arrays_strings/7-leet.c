#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: a string
 *
 * Return: str
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[256] = {0};

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (*ptr)
	{
		int c = *ptr;

		if (leetMap[c])
		{
			*ptr = leetMap[c];
		}
		ptr++;
	}

	return (str);
}
