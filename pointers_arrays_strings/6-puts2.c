#include "main.h"
/**
 * puts2 - check the code.
 * @str: an argument.
 * Return: void.
 */
void puts2(char *str)
{
	int count;
	/*char disp;*/

	for (count = 0; str[count] != '\0'; count += 2)
	{
		_putchar(str[count]);
	}
		_putchar('\n');
}
