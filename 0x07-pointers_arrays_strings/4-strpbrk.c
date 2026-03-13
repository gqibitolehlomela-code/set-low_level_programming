#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set of bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
    char *a;

    while (*s != '\0')
    {
        a = accept;
        while (*a != '\0')
        {
            if (*s == *a)
                return (s);
            a++;
        }
        s++;
    }

    return (NULL);
}