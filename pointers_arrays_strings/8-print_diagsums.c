#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - check the code
 * @a: an argument.
 * @size: an argument.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int count;
	int total = 0;
	int total_0 = 0;

	for (count = 0; count < size; count++)
	{
		total += *(a + (count * size + count));
		total_0 += *(a + (count * size + (size - count - 1)));
	}
	printf("%d, %d\n", total, total_0);
}
