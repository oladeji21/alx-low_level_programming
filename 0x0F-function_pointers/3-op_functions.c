#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - Sums up a and b
* @a: First int argument
* @b: Second int argument
*
* Return: Sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Difference of a and b
* @a: First int argument
* @b: Second int argument
*
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - product of a and b
* @a: First int argument
* @b: Second int argument
*
* Return: Product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Dividend of a and b
* @a: First int argument
* @b: Second int argument
*
* Return: Dividend of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Modulus of a and b
* @a: First int argument
* @b: Second int argument
*
* Return: Modulus of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
