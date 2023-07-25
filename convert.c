#include "main.h"
/**
 * convert - converts number, base into string
 * @num: input number
 * @base: input base
 * @lower: flag if hexa values need to be lowercase
 * Return: result
 */
char *convert(unsigned long int num, int base, int lower)
{
	static char *rp;
	static char buffer[50];
	char *ptr;

	rp = (lower)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rp[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
