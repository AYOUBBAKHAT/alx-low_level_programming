#include "main.h"

/**
 * print _most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)

{
	int x = 0;
	for (; x <= 0; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else

	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
