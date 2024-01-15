#include <stdio.h>
#include "main.h"

/**
* _strchr - locates a character in astring and prints the string from there
*@s: char argument or pointer to string
*@c: character to locate
*Return: pointer to first occurenec of char if found or null if not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (!c)
	{
		return (s);
	}
	return (NULL);
}
