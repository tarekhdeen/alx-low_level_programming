#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	unsigned int count = 0;
	unsigned int i;
	const listint_t *visited[1024];

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		visited[count++] = current;
		current = current->next;
	}

	return (count);
}
