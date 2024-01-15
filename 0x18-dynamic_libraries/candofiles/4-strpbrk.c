#include <stdio.h>
#include "main.h"

/**
* _strpbrk - Searches a string for any set of bytes
*@s: Pointer to char argument
*@accept: Pointer to char argument
*Return: Returns matching characters stores in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
