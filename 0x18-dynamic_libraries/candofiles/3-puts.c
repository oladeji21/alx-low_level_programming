#include <stdio.h>
#include "main.h"

/**
* _puts - Function to print string to stdout
* @str: Takes string argument
* Return: null Success
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
