#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data in a doubly list
* @head: pointer holding address of first node in the list
*
* Return: Sum of all data(n) in doubly list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
