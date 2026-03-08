#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start;
	int end;
	char temp;

	start = 0;
	end = 0;
	while (s[end])
		end++;
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
