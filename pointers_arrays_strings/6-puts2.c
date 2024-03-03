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

	for (count = 0; str[count] != '\0'; count++)
	{}
	for (disp = 0; disp < count; disp += 2)
	{
		_putchar(str[disp]);
	}

	_putchar('\n');
}
