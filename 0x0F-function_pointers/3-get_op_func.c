#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - Function to select corrct fn to perform asked by the user
* @s: Operator passed as argument
*
* Return: A pointer to the function that its operator specifies
*/
int (*get_op_func(char *s))(int, int)
{
	/**
	* ops[] - newly created array of type op_t/op
	*op_t/op - is a struct type that takes a function pointer
	* and a *char as members.
	*i.e each element of the array ops is a function pointer
	* and contains a *char.
	*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
