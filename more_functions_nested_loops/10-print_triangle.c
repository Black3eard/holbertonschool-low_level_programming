#include "main.h"
/**
 * print_triangle - check the code
 * @size: an argument
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int num1, num2, num3;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = size - num1; num2 > 1; num2--)
			{
				_putchar(' ');
			}
			for (num3 = 0; num3 <= num1; num3++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
