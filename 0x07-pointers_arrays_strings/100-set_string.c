#include "main.h"

/**
 * set_string -  a function that sets the value of a pointer to a char.
 * @s: Points to the pointer that you want to update.
 * @to: Points to the character string that you want s to point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
