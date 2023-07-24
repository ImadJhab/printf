#include "main.h"

/**
 * print_special_string - Prints a string with non-printable characters.
 *
 * @str: The input string to print.
 *
 * Return: The number of characters printed.
 */
int print_special_string(char *str)
{
	int count = 0;
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr < 32 || *ptr >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(*ptr / 16 + '0');
			if (*ptr % 16 < 10)
			{
				count += _putchar(*ptr % 16 + '0');
			}
			else
			{
				count += _putchar(*ptr % 16 - 10 + 'A');
			}
		}
		else
		{
			count += _putchar(*ptr);
		}

		ptr++;
	}

	return (count);
}
