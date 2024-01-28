#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
     /* char *len = "1000";

      _printf("Length:[%s]sssss\n",len);
      printf("Length:[%s]sssssss\n",len);*/
	_printf("Hello world\n");
	printf("Hello world\n");
	_printf("charecters: %c %c\n", 'a', 65);
	printf("charecters: %c %c\n", 'a', 65);
	_printf('this is a percent sign %% \n');
	printf('this is a percent sign %% \n');
      return (0);
}
