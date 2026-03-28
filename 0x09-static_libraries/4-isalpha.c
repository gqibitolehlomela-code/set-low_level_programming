#include "main.h"

int _isalpha(int c)
{
    return ((_islower(c) || (c >= 'A' && c <= 'Z')));
}
