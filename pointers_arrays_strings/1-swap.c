#include "main.h"
/**
 * swap_int - check the code.
 * @a: an argument.
 * @b: an argument.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}
