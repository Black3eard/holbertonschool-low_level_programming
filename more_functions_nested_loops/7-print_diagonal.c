#include "main.h"
/**
 * print_diagonal - check the code
 * @n: an argument.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int space, col;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (space  = 0; space < n; space++)
		{
			for (col = 0; col < space; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

