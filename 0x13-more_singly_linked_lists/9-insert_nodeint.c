#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: points to the fast node in the list
 * @idx: index where the new node is added
 * @n: data to insert within the the new node
 *
 * Return: pointer to the new node on succes or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *new_data;
	listint_t *temp = *head;

	new_data = malloc(sizeof(listint_t));
	if (!head || !new_data)
		return (NULL);

	new_data->n = n;
	new_data->next = NULL;

	if (idx == 0)
	{
		new_data->next = *head;
		*head = new_data;
		return (new_data);
	}

	for (g = 0; temp && g < idx; g++)
	{
		if (g == idx - 1)
		{
			new_data->next = temp->next;
			temp->next = new_data;
			return (new_data);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
