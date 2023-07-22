#include "main.h"

/* Function definition for print_char */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    return _putchar(c);
}

/* Function definition for print_string */
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

    return count;
}

/* Function definition for print_char_string_or_percent */
int print_char_string_or_percent(char specifier, va_list args)
{
    switch (specifier)
    {
        case 'c':
            return print_char(args);
        case 's':
            return print_string(args);
        case '%':
            return _putchar('%');
        default:
            return _putchar('%') + _putchar(specifier);
    }
}
