#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	unsigned int count = 0;
	unsigned int i;
	listint_t *visited[1024];

	while (current != NULL)
	{
		next = current->next;
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				*h = NULL;
				return (count);
			}
		}
		visited[count++] = current;
		free(current);
		current = next;
	}

	*h = NULL;
	return (count);
}
