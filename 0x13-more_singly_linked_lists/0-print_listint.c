#include "lists.h"
/**
* print_listint - Prints all elements/node of a singly linked list
* @h: Pointer to first nodee in list
*
* Return: Number of nodes in list
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return(count);
}
