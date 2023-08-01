#include "lists.h"
/**
* add_nodeint_end - Adds a node at the end of the list
* @head: Pointer pointing to first elemnt of linked list
* @n: Data element to initialize new node with
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *last_node = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last_node->next)
{
last_node = last_node->next;
}
last_node->next = new_node;
return (new_node);
}
