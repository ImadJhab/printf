#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format containing characters and specifiers
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'S')
			{
				count += print_special_string(va_arg(args, char *));
			}
			else
			{
				count += print_char_string_or_percent(format[i], args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}

	va_end(args);

	return (count);
}
