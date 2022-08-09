#include "main.h"
/**
 * print_char- prints a character
 * args: list of argument
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
