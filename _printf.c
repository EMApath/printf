#include "main.h"

/**
 * _printf- prints out a character into std output
 *
 * @format: charracter to be printed
 * Return: number of charachters printed
 */

int _printf(const char *format, ...)
{
	int i;
	int printed_num = 0;
	va_list list;	
	va_start(list, format);
	char *chars = format;

  	for (i = 0; *chars != '\0'; chars++)
	{
		if (*chars != '%')
		{
			_putchar(*chars);
			printed_num++;
		}
		else
		{
			chars++;
			if (*chars == 'c')
			{
				char var_char = va_arg(list ,char);
				_putchar(var_char);
				printed_num++;
			}

			if (*chars == 's')
			{
				char *var_string = va_arg(list ,char *);
				for (i = 0; *var_string != '\0'; var_string++)
				{
					_putchar(*var_string);
					printed_num++;
				}
			}
			if (*chars == '%')
			{
				_putchar('%');
				printed_num++;
			}
		}
	}
	va_end(list);
	return (printed_num);
}
