#include "main.h"
/**
 * print_sign - print the sign of the number
 * @c: The sign to be checked
 * Return: 1 for positive number, -1 for the negative number or 0 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar (45);
return (-1);
}
else 
{
_putchar(48);
return(0);
}
}
