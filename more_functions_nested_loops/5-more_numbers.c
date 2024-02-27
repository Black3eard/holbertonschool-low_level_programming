#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;

	for (n = 0 ; n <= 14; n++)
	{
		if (n >= 0 && n <=9)
		{
			_putchar(n % 10 + '0');
		}
		if (n > 9 && n <= 14 )
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
	_putchar('\n');
}
