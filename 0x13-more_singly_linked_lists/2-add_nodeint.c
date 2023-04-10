#include "lists.h"

/**
 * This Funtion adds at the start of a list a new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t Anew_node;

	Anew_node = malloc(sizeof(listint_t));
	if (Anew_node == NULL)
		return (NULL);

	if (**head == NULL)
		Anew_node->next = NULL;
	else
		Anew_node->next = **head;

	Anew_node->n = n;
	**head = Anew_node;

	return (**head);
}
