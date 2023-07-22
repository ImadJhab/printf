#include "main.h"

/* Function definition for _printf */
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

            count += print_char_string_or_percent(format[i], args);
        }
        else
        {
            count += _putchar(format[i]);
        }

        i++;
    }

    va_end(args);

    return count;
}
