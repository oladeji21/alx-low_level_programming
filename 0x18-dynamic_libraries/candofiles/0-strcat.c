#include <stdio.h>
#include "main.h"
/**
* _strcat - concatenates two String
* @dest: char argument
* @src: char argument
* Return: a pointer to the string dest
*/
char *_strcat(char *dest, char *src)
{
	int i;

	int dest_length = 0;
	int src_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[src_length] != '\0')
	{
		src_length++;
	}

	for (i = 0; i < src_length; i++)
	{
		dest[dest_length + i] = src[i];
	}
	return (dest);
}
