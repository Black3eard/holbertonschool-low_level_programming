#include "main.h"
/**
 * print_chessboard - check the code.
 * @a: an argument.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int l, an;

	for (l = 0; l < 8; l++)
	{
		for (an = 0; an < 8; an++)
			_putchar(a[l][an]);
		_putchar('\n');
	}
}
