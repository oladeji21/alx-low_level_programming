#include <stdio.h>
#include "main.h"

/**
* _isalpha - Checks if a character is an Alphabet
* @c: a char argument
* Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
