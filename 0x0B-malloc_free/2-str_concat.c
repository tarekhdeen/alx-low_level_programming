#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_length - string length.
 * @str: a string.
 *
 * Return: len
 */
int string_length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a special address or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, combined_len, i, j;
	char *con;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len_s1 = string_length(s1);
	len_s2 = string_length(s2);
	combined_len = len_s1 + len_s2 + 1;

	con = malloc(combined_len * sizeof(char));

	if (con == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		con[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		con[len_s1 + j] = s2[j];
	}

	con[len_s1 + len_s2] = '\0';

	return (con);
}
