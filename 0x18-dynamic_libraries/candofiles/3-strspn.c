#include <stdio.h>
#include "main.h"

/**
*  _strspn - Calculate length of  a prefix substring
* @s: pointer to char argument
* @accept: pointer to char argument
* Return: returns length of similar characters in both string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;

	/**Get length of both strings*/
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					counter++;
				}
				j++;
			}
		}
		else
		{
			return (counter);
		}
		i++;
	}
	return (counter);
}
