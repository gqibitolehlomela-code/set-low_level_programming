#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
