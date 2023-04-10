#include "lists.h"

/**
 * This Funtion will Return number of the elements found in a linked list
 * Returns: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t numberofelements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			numberofelements++;

		h = h->next;
	}

	return (numberofelements);
}
