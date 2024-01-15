#include <stdio.h>
#include "main.h"

/**
* _strcmp - Compares two strings
* @s1:- takes char memory address
* @s2: takes char memory address
* Return: The difference between the two strings
*/
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
	{
		i++;
	}
	diff = *(s1 + i) - *(s2 + i);
	return (diff);
}
