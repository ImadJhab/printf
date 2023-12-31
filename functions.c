#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string
 * @str: pointer of a string
 * Return: none
 */
int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
