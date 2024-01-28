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


	va_list list;	
	va_start(list, format);
	
	char *chars = format;

  	for (i = 0; *chars != '\0'; chars++)
	{
		if (*chars != '%')
		{
			_putchar(*chars);
		}
		else
		{
			chars++;
			if (*chars == "c")
			{
				char var_char = va_arg(list ,char);
				_putchar(var_char);
			}

			else if (*chars == "s")
			{
				printf("111");
				char *var_string = va_arg(list ,char *);
				for (i = 0; *var_string != '\0'; var_string++)
					_putchar(*var_string);
			}
		}
	}
	va_end(list);
}
