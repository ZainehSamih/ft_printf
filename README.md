# ft_printf

A custom implementation of the C `printf` function using variadic arguments.

## About

This project was developed as part of the 42 Core Curriculum. It focuses on variadic functions, formatted output, and modular C programming.

## Supported Conversions

- `%c` — Character
- `%s` — String
- `%p` — Pointer
- `%d` and `%i` — Signed integer
- `%u` — Unsigned integer
- `%x` and `%X` — Hexadecimal
- `%%` — Percent sign

## Compilation

```bash
make
```

This generates `libftprintf.a`.

## Usage

Include the project header and link the library when compiling:

```bash
cc main.c -L. -lftprintf -o program
```

## Note

This is an educational implementation. Check the project subject for its exact behavior and limitations.
