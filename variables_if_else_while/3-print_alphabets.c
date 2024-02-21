#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char AZ;

	for (AZ = 'a'; AZ <= 'z'; AZ++)
	{
		putchar(AZ);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	{
		putchar('\n');
	}
	return (0);
}
