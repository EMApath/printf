#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * typedef struct specs - the structure to var_functions 
 */
typedef struct specs
{
	char *format;
	void (*fun_t)(va_list);
} specifer;

void case_charecter(va_list list);
void case_string(va_list list);
void case_percent(__attribute__((unused))va_list list);

#endif
