#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list  which is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_var;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_var = (*head)->next;
		free(*head);
		*head = temp_var;
	}

	*head = NULL;
}
