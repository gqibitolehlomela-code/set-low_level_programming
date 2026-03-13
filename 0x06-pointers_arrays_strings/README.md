# 0x06 - Pointers, Arrays, Strings

This directory contains implementations of advanced C functions for string manipulation, array operations, and comparisons.

## Project Requirements

- Language: C (gnu89 standard)
- Compiler: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a newline
- Betty style compliance
- No global variables
- Maximum 5 functions per file
- Output using `_putchar` only (except where printf is allowed)
- All function prototypes in `main.h`

## Tasks Completed

0. **_strcat** - Concatenates two strings
1. **_strncat** - Concatenates two strings using at most n bytes from src
2. **_strncpy** - Copies a string with a maximum length
3. **_strcmp** - Compares two strings
4. **reverse_array** - Reverses the content of an array of integers
5. **string_toupper** - Changes all lowercase letters to uppercase
6. **cap_string** - Capitalizes all words of a string
7. **leet** - Encodes a string into 1337 (leet speak)

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <task>.c <main>.c -o <output>
```

## Files

- `main.h` - Header file with function prototypes
- `0-strcat.c` - Implementation of _strcat
- `1-strncat.c` - Implementation of _strncat
- `2-strncpy.c` - Implementation of _strncpy
- `3-strcmp.c` - Implementation of _strcmp
- `4-rev_array.c` - Implementation of reverse_array
- `5-string_toupper.c` - Implementation of string_toupper
- `6-cap_string.c` - Implementation of cap_string
- `7-leet.c` - Implementation of leet
- `_putchar.c` - Helper function for character output

## Author

Created as part of the Low-Level Programming learning path.