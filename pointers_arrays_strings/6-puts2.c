#include "main.h"
/**
 * puts2 - check the code.
 * @str: an argument.
 * Return: void.
 */
void puts2(char *str)
{
	int count;
	int disp;

	for (count = 0, disp = 0; str[count] != '\0' && str[disp] != '\0'; count ++, disp += 2)
	{
		_putchar(str[disp]);
	}
		_putchar('\n');
}
