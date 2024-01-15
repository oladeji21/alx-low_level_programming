#include <stdio.h>
#include "main.h"

/**
* _isdigit -  Checks if a number is a digit
* @c: Integer argument
* Return: 1 if c is a digit and 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
