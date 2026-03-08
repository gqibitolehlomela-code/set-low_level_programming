#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count;
	int half;

	count = 0;
	while (str[count])
		count++;

	half = (count - 1) / 2;
	half++;

	while (str[half])
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
