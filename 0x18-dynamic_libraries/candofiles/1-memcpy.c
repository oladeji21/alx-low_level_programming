#include <stdio.h>
#include "main.h"

/**
* _memcpy - Function to copy a number of bytes of memory into another memory
*@dest: destinatied memory address to replace
*@src: source memory address to copy no of bytes from
*@n: number of bytes of memory to copy from source
*Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	n--;
	return (dest);
}
