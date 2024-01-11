#include "lists.h"

/**
* dlistint_len - prints all elements of a doubly linked list
* @h: node pointer holding address of first node in list
*
* Return: The number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	count = 0;
	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
