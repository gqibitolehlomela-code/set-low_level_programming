# set-low_level_programming

This project contains implementations of fundamental C functions focused on pointers, arrays, and strings.

## Directory Structure

- **0x05-pointers_arrays_strings/**: Pointers, arrays, and strings tasks

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

## Compilation

```bash
cd 0x05-pointers_arrays_strings
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <task>.c <main>.c -o <output>
```

## Author

Created as part of the Low-Level Programming learning path.