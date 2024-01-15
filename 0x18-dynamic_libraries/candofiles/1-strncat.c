#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenates two strings but this time using more bytes from n
* @dest: char argument
* @src: char argument
* @n: int argument
* Return: Return a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int src_len = 0;
	int des_len = 0;

	while (dest[des_len] != '\0')
	{
		des_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0; i < n && src_len; i++)
	{
		dest[des_len + i] = src[i];
	}
	dest[des_len + i] = '\0';
	return (dest);
}
