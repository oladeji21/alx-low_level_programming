#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - Function to take a function pointer as argument to print name
* @name: char argument
* @f: Pointer to function
*
*Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
