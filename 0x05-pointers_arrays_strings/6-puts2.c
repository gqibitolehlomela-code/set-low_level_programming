#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
