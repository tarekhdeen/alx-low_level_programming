#include "main.h"
#include "string.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome.
 * @s: a string
 * @start: start of string.
 * @end: end of string.
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	int start;
	int end;
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome(s, 0, len - 1));
}

int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome(s, start + 1, end - 1));
}
