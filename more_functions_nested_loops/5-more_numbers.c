#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int v;

	for (v = 0; v < 10; v++)
	{
		for (n = 0 ; n <= 14; n++)
		{
			if (n > 9)
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
