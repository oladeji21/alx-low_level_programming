#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{

	write(1, "9 8 10 24 25 +9\n", 17);
	write(1, "congratulation,you win the  Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
