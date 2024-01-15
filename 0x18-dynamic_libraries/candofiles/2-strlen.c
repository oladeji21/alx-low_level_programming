#include <stdio.h>
#include "main.h"

/**
* _strlen - Calculates the lentgh of a string
* @s: Pointer to char address
* Return: correct number of string lenght (Success)
*/
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
