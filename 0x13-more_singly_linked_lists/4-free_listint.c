#include "lists.h"

/**
 * free a list
*/
void free_listint(listint_t *head)
{
	listint_t *currentnode;

	while ((currentnode = head) != NULL)
	{
		head = head->next;
		free(currentnode);
	}
}
