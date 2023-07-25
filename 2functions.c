#include "main.h"
/**
 * print_unsigned_int - prints an unsigned integer
 * @n: number
 * Return: returns c
*/
int print_unsigned_int(unsigned int n)
{
	int c = 0;

	if (n <= 9)
	{
		c += _putchar(n + 48);
	}
	else
	{
		c += print_unsigned_int(n / 10);
		c += _putchar((n % 10) + 48);
	}
	return (c);
}
/**
 * print_octal - prints an octal number
 * @n: number
 * Return: returns c
*/
int print_octal(unsigned int n)
{
	int c = 0;

	if (n > 7)
	{
		c = print_octal(n / 8);
	}
	c += _putchar((n % 8) + 48);
	return (c);
}
/**
 * print_hex - prints hexadecimal with lowercase
 * @n: number
 * Return: returns c
 */
int print_hex(unsigned int n)
{
	int c = 0;

	if (n > 15)
	{
		c += print_hex(n / 16);
	}
	if (n % 16 < 10)
	{
		c += _putchar((n % 16) + 48);
	}
	else
	{
		c += _putchar(n % 16 - 10 + 'a');
	}
	return (c);
}
/**
 * print_HEX - prints hexadecimal with uppercase
 * @n: number
 * Return: returns c
*/
int print_HEX(unsigned int n)
{
	int c = 0;

	if (n > 15)
	{
		c += print_HEX(n / 16);
	}
	if (n % 16 < 10)
	{
		c += _putchar((n % 16) + 48);
	}
	else
	{
		c += _putchar(n % 16 - 10 + 'A');
	}
	return (c);
}
