#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf- prints out a character into std output
 *
 * @format: format string with string literals and specifiers
 * @...: variable number of arguments
 *
 * Return: number of charachters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int printed_num = 0;

	va_list list;
	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_num++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				int var_char = va_arg(list, int);

				_putchar(var_char);
				printed_num++;
			}
			if (format[i] == 's')
			{
				char *var_string = va_arg(list, char *);
				int k;

				for (k = 0; var_string[k] != '\0'; var_string++)
				{
					_putchar(*var_string);
					printed_num++;
				}
			}
			if (format[i] == '%')
			{
				_putchar('%');
				printed_num++;
			}
			else
			{
			_putchar(format[i]);
			printed_num++;
			}
		}
	}
	va_end(list);
	return (printed_num);
}
