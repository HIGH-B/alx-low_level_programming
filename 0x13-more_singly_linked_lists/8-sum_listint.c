#include "lists.h"

/**
 * sum_listint - This returns the sum of all the data (n)
 * @head: a pointer to the head of a list
 * Return: sum of all the data (n)
 *         if not - 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
