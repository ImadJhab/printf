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
		case 'i':
			return (print_integer(va_arg(args, int)));
		case 'b':
			return (print_binary(args));
		case 'u':
			return (print_unsigned_int(va_arg(args, unsigned int)));
		case 'o':
			return (print_octal(va_arg(args, unsigned int)));
		case 'x':
			return (print_hex(va_arg(args, unsigned int)));
		case 'X':
			return (print_HEX(va_arg(args, unsigned int)));
		case 'R':
			return (print_rot13(va_arg(args, char *)));
		case 'r':
			return (print_rev(va_arg(args, char *)));
		case 'p':
			return (print_address(va_arg(args, void *)));

		default:
			return (_putchar('%') + _putchar(specifier));
	}
}
/**
 * print_integer - Prints an integer to stdout
 * @n: integer to be printed
 * Return: The number of characters printed
 */
int print_integer(int n)
{
	int num = 0;

	if (n >= 0 && n <= 9)
	{
		num += _putchar(n + 48);
	}
	else if (n < 0)
	{
		num += _putchar('-');
		if (n == -2147483648)
		{
			num += _putchar('2');
			n %= 1000000000;
		}
		num += print_integer(-n);
	}

	else
	{
		num += print_integer(n / 10);
		num += _putchar((n % 10) + 48);
	}
	return (num);
}
/**
 * print_binary - Prints a binary number to stdout
 * @args: A va_list containing the arguments to be printed
 * Return: The number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int binary[32];

	int i;

	for (i = 0; i < 32; i++)
	{
		binary[i] = num & 1;
		num >>= 1;
	}
	i = 31;
	while (i >= 0 && binary[i] == 0)
		i--;

	if (i < 0)
	{
		count += _putchar('0');
		return (count);
	}

	for (; i >= 0; i--)
	{
		count += _putchar(binary[i] + '0');
	}

	return (count);
}
