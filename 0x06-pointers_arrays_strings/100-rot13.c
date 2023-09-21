#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @str: a string to be encoded.
 *
 * Return: str
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{
			*ptr -= 13;
		}
		ptr++;
	}

	return (str);
}
