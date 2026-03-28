# 0x09. Static Libraries

This project builds a static library `liball.a` from all source files in the current directory with `create_static_lib.sh`.

## Files
- `main.h` : all function prototypes
- `_putchar.c`, `0-*`, `1-*`, ..., etc : implementations
- `create_static_lib.sh` : creates `liball.a`

## Usage

```bash
./create_static_lib.sh
ar -t liball.a
```

```bash
gcc -std=gnu89 main.c -L. -lall -o quote
./quote
```

