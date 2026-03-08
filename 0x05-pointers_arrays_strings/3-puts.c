#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: pointer to string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
