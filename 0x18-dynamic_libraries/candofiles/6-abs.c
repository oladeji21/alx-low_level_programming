#include <stdio.h>
#include "main.h"

/**
* _abs - Computes absolute value of an integer
* @n: Declared an Integer argument
* Return: n absolute value
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
