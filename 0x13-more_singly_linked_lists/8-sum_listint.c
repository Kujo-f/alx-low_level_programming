#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_data += temp->n;
		temp = temp->next;
	}

	return (sum_data);
}
