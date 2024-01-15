#include <stdio.h>
#include "main.h"

/**
* _memset - Copiesbytes of a value into a memory
*@s: char argument
*@b: char argument of value to be copied into memory
*@n: unsigned int of number of bytes or size of b to copy into memory
*Return: memory of char or pointer of char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		*(s + i) = b;
		i++;
	}
	n--;
	return (s);
}
