#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char_string_or_percent(char specifier, va_list args);
int print_integer(int n);
int print_binary(va_list args);
int print_unsigned_int(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);
int print_special_string(char *str);
int print_rev(char *c);
int print_rot13(char *c);
int convert(unsigned long num);
int print_address(void *p);

#endif
