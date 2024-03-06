#include "main.h"
/**
 * factorial - check the code.
 * @n: an argument.
 * Return: int.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
