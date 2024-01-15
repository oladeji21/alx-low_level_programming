#include <stdio.h>
#include "main.h"

/**
* _isupper - Checks if an alphabet is an upper case
* @c: integer argument
* Return: 1 if true and 0 if false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
