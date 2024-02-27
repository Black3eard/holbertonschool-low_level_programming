#include "main.h"
/**
 * print_line - check the code.
 * @n: an argument
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
		else
			for (l = 0; l < n; l++)
			{
				_putchar('_');
			}
		_putchar('\n');
}
