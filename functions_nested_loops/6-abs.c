#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code
 * @z: an argument
 * Return: Always 0.
 */
int _abs(int z)
{
	int y= 1;
	int c= 2;
	int r= y - c;

	if (z < 0)
	{
		z = r * z;
		_putchar(r);
	}
	else
	{
		_putchar(z);
	}
	return (z);
}
