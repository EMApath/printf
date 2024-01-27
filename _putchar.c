#include <unistd.h>
/**
 * _putchar - prints out a character into std output
 *
 * @c: charracter to be printed
 * Return: 1 Always on success
 */
int _putchar(char c)
{
	write(1, &c, 1);

	return (1);
}
