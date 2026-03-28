#include "main.h"

int _atoi(char *s)
{
    int i = 0, sign = 1, res = 0;

    while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
                            s[i] == '\v' || s[i] == '\f' || s[i] == '\r'))
        i++;

    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            sign = -sign;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }

    return (res * sign);
}
