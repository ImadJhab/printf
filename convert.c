#include "main.h"
/**
 * convert - converts number, base into string
 * @num: input number
 * Return: result
 */
int convert(unsigned long num)
{
	int i = 0;
	int j;
	int k;
	int c = 0;
	char ar[60];
	char h[] = "0123456789abcdef";

	while (num)
	{
		k = num % 16;
		ar[i] = k;
		num = num / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		c += _putchar(h[(int)ar[j]]);
	}
	return (c);
}
