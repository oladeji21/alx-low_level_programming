#include <stdio.h>

/**
* subtract - function to add two arguments
* @a: integer argument to subtract
* @b: integer argment to subtract
* Return: Difference of both arguments
*/
int sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
* mod - function to get the remainder btw two arguments
* @a: integer argument to get remainder
* @b: integer argment to get remainder
* Return: Remainder of both arguments
*/
int mod(int a, int b)
{
	int rem;

	rem = a % b;
	return (rem);           }

/**
* multiply - function to add two arguments
* @a: integer argument to multiply
* @b: integer argment to multiply
* Return: Prouduct of both arguments
*/
int mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}        

/**
* add - function to add two arguments
* @a: integer argument to add
* @b: integer argment to add
* Return: Sum of both arguments
*/
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
* div - function to divide two arguments
* @a: integer argument to divide
* @b: integer argment to divide
* Return: div of both arguments
*/
int div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
