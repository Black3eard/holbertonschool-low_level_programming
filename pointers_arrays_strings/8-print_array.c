#include <stdio.h>
#include "main.h"
/**
 * print_array - check the code.
 * @a: an argument.
 * @n: an argument.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; a[count] != '\0'; count++)
	{
		if (count < n)
		{
			printf("%d, ", a[count]);
		}
	}
	printf("\n");
}
