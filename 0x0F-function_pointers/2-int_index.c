#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Fn to retuirn index of 1st element for which cmp doesnt return 0
* @array: Array of integers to search
* @size: Size of array
* @cmp: Pointer
*
* Return: -1 if no match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && size > 0 && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
