#include "main.h"
/**
 * print_last_digit - check the code
 * @l: an argument
 * Return: Always 0
 */
int print_last_digit(int l)
{
	if (l < 0)
	{
		return (-l % 10);
	}
	else
	{
		return (l % 10);
	}
}
