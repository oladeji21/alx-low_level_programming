#include "3-calc.h"

/**
* main - calls other functions
* @argc: argument count
* @argv: argument vector
*
* Return: error if conditions not met
*/
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	/**
	* opS will hold the operating sign gotten from *argv[2]
	*/
	char opS;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opS = *argv[2];

	if ((opS != '+' && opS != '-' && opS != '*' && opS != '/' && opS != '%')
		 || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	if ((opS == '/' || opS == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
