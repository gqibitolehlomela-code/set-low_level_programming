# set-low_level_programming

This project contains implementations of fundamental C functions focused on pointers, arrays, and strings.

## Directory Structure

- **0x05-pointers_arrays_strings/**: Pointers, arrays, and strings tasks
- **0x06-pointers_arrays_strings/**: Advanced pointers, arrays, and strings tasks
- **0x07-pointers_arrays_strings/**: Even more pointers, arrays, and strings tasks

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

### 0x05 - Pointers, Arrays, Strings

0. **reset_to_98** - Sets an integer value to 98 via pointer
1. **swap_int** - Swaps values of two integers
2. **_strlen** - Returns the length of a string
3. **_puts** - Prints a string followed by newline
4. **print_rev** - Prints a string in reverse
5. **rev_string** - Reverses a string in place
6. **puts2** - Prints every other character of a string
7. **puts_half** - Prints the second half of a string
8. **print_array** - Prints array elements separated by commas
9. **_strcpy** - Copies a string from source to destination

### 0x06 - Advanced Pointers, Arrays, Strings

0. **_strcat** - Concatenates two strings
1. **_strncat** - Concatenates two strings using at most n bytes from src
2. **_strncpy** - Copies a string with a maximum length
3. **_strcmp** - Compares two strings
4. **reverse_array** - Reverses the content of an array of integers
5. **string_toupper** - Changes all lowercase letters to uppercase
6. **cap_string** - Capitalizes all words of a string
7. **leet** - Encodes a string into 1337 (leet speak)
### 0x07 - Even More Pointers, Arrays, Strings

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
cd 0x05-pointers_arrays_strings
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <task>.c <main>.c -o <output>
```

## Author

Created as part of the Low-Level Programming learning path.