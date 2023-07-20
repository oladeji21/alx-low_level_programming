#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Functionn to perform a function on an array
* @array: Array given to work on
* @size: size of the array
* @action: Pointer to function on how to work on the array
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size > 0 && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
