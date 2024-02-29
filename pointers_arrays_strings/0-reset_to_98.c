#include "main"
#include <stdio.h>
/**
 * 0-reset_to_98.c - check the code.
 * @*n: an arengment.
 * Return Always 0.
 */
void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;
}
