#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: pointer to string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count])
		count++;
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
