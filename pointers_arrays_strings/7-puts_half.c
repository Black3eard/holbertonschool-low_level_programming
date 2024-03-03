#include "main.h"
/**
 * puts_half - check the code.
 * @str: an argument.
 * Return: void.
 */
void puts_half(char *str)
{
	int count;
	int disp;

	for (count = 0; str[count] != '\0'; count++)
	{}
	if (count % 2 == 1)
	{
		disp = (count - 1) / 2;
		disp++;
	}
	else
	{
		disp = count / 2;
	}
	for (; disp < count; disp++)
	{
		_putchar(str[disp]);
	}
	_putchar('\n');
}
