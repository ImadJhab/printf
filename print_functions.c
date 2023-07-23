#include "main.h"
/**
 * print_char - Prints a single character
 * to the stdout
 * @args: A va_list containing the arguments to be printed
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * print_string - Prints a string to stdout
 * @args: A va_list containing the arguments to be printed
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
/**
 * print_char_string_or_percent - Prints a character,
 * string, or percent symbol
 * @specifier: The conversion specifier
 * @args: A va_list containing the arguments to be printed
 * Return: The number of characters printed
 */
int print_char_string_or_percent(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case '%':
			return (_putchar('%'));
		case 'd':
			return (print_integer(args));
		case 'i':
			return (print_integer(args));
		default:
			return (_putchar('%') + _putchar(specifier));
	}
}
/**
 * print_integer - Prints an integer to stdout
 * @args: A va_list containing the arguments to be printed
 * Return: The number of characters printed
 */
int print_integer(va_list args)
{
	/* Your implementation for handling 'd' */
	/* For now, returning 0 as a placeholder */
	return (0);
}

