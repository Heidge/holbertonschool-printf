# Project - Printf

## Description

The function printf is a collection of files.c that when compiled and executed, produces output according to a format.

---

## Prototype
```int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

## Format Specifier

| Specifier | Description
| --- | --- |
| `%s` | print a string of characters |
| `%c` | print a single character |
| `%%` | print a percent sign (% also works) |
| `%d` | print a decimal (base 10) number |
| `%i` | print an integer in base 10 |


## How to use

* `_printf.c` function that passing a formatted string with any format specifiers
* `_putchar.c` function that gets a char parameter with the stdout, the standard output stream
* `_print_int` function
* `_print_number` function
* `_print_percent` function for print only %
* `_print_str` function for print strings

###


## Examples outputs

* `_printf("%c", 'H');` => __prints the character "H"__
* `_printf("%s\n", "I am a string !");` => __prints the string "I am a string !" followed by a new line__
* `_printf("%%");` => __prints the character "%"__
* `_printf("%d",762534);` => __prints the decimal "762534"__
* `_printf("%i", 39);` => __prints the integer "39"__


# Tasks

#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.

Write a function that produces output according to a format.

* Prototype: `int _printf(const char *format, ...);`
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* `format` is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  * `c`
  * `s`
  * `%`
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

#### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:
* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

#### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.
