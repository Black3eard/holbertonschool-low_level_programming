#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9; n++)
		if (n != 4 && n != 2)
		{
			_putchar(n + '0');
		}
	_putchar('\n');
}
