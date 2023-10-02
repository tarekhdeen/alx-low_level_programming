#include "main.h"

/**
 *  * _memcpy - copies memory area.
 *   * @dest: Points to the memory area where you want to copy data to.
 *    * @src: Points to the memory area you want to copy from.
 *     * @n: Is the number of bytes to copy.
 *      *
 *       * Return: dest
 *        */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
