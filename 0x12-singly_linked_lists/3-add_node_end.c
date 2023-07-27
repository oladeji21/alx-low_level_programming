#include "lists.h"

/**
* add_node_end - Adds node to end of list
* @head: Pointer pointing to list/ first node in list
* @str: Pointer to new data element to insert
*
* Return: Address of new element or null
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
size_t len = 0;
list_t *last = *head;
while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last->next)
last = last->next;
last->next = new_node;
return (new_node);
}
