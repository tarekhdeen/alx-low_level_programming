#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: input and returns a character array (string).
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
				capitalize_next = 0;
			}
			else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] - 'A' + 'a';
			}
			else
			{
				capitalize_next = 0;
			}
		}
		i++;
	}

	return (str);
}
