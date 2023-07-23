#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char_string_or_percent(char specifier, va_list args);
int print_integer(int n);
int print_binary(va_list args);

#endif
