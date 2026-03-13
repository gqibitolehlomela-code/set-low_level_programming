# 0x07 - Even More Pointers, Arrays, Strings

This directory contains implementations of memory manipulation and advanced string search functions.

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

0. **_memset** - Fills memory with a constant byte
1. **_memcpy** - Copies memory area
2. **_strchr** - Locates a character in a string
3. **_strspn** - Gets the length of a prefix substring
4. **_strpbrk** - Searches a string for any of a set of bytes
5. **_strstr** - Locates a substring
6. **print_chessboard** - Prints the chessboard
7. **print_diagsums** - Prints the sum of the two diagonals of a square matrix

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <task>.c <main>.c -o <output>
```

## Files

- `main.h` - Header file with function prototypes
- `0-memset.c` - Implementation of _memset
- `1-memcpy.c` - Implementation of _memcpy
- `2-strchr.c` - Implementation of _strchr
- `3-strspn.c` - Implementation of _strspn
- `4-strpbrk.c` - Implementation of _strpbrk
- `5-strstr.c` - Implementation of _strstr
- `6-print_chessboard.c` - Implementation of print_chessboard
- `7-print_diagsums.c` - Implementation of print_diagsums
- `_putchar.c` - Helper function for character output

## Author

Created as part of the Low-Level Programming learning path.