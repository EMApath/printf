#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string to be produced
 * @...: variable number of arguments to be produced
 *
 * Return: on success number of printed charecters
 * Return: a negative value on error
 */
int _printf(const char *format, ...)
{
	/* return num of charecters printed*/
	int length = 0;
	length = strlen(format);

	/*declare pointer to arg list*/
	va_list pstr;

	/*intialize arguments to the list pointer*/
	va_start(pstr, format):wq;

	return (length);
}
