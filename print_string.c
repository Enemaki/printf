#include "main.h"
/**
 * print_string- prints a string
 * @args: variable list
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	int i;
	char *ch = va_arg(args, char *);

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	return (i);
}
