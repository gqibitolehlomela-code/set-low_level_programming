#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *a;

    while (*s != '\0')
    {
        a = accept;
        while (*a != '\0' && *a != *s)
            a++;
        if (*a == '\0')
            return (count);
        count++;
        s++;
    }
    return (count);
}
