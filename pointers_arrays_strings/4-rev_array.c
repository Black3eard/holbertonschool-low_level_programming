#include "main.h"
/**
 * reverse_array - check the code.
 * @a: an argument.
 * @n: an argument.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int count, rev, disp;
	int *ptr = a;

	for (count = 0; count < n; count++)
	{
		ptr++;
	}
	ptr--;
	for (rev = 0; rev < n / 2; rev++)
	{
		disp = a[rev];
		a[rev] = *ptr;
		*ptr = disp;
		ptr--;
	}
}
