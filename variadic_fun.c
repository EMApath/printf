#include <stdarg.h>
#include "main.h"
/**
 * case_charecter - prints charecters to stdout
 * 
 * @list: variadic function list
 */
void case_charecter(va_list list)
{
	char var_char;

	var_char = va_arg(list, int);
	_putchar(var_char);
}
/**
 * case_string - prints strings to stdout
 * 
 * @list: variadic function list
 */
void case_string(va_list list)
{
	char *var_string = va_arg(list, char *);
	int k;

	for (k = 0; var_string[k] != '\0'; k++)
		_putchar(var_string[k]);
}
/**
 * case_percent - prints '%' to stdout
 *
 * @list: variadic function list
 */
void case_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
}
