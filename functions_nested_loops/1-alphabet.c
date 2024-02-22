#include "main.h"
/**
 * print_alphabet - Entry Pioint
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az <= 'z')
			_putchar(az);
	}
	_putchar('\n');
}
