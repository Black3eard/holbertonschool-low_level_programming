#include"main.h"
/**
 * islower - Entry Point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{

		return (1);
	}
}
