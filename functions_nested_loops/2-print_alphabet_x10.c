#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int seq;
	char az;

	for (seq = 0; seq <= 10; seq++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
	}
}
