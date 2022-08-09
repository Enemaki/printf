#include "main.h"

/**
 * _printf- function that produces output according to a format
 * @format: a character string
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int printed;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed += print_char(args);
					i = i + 2;
					break;
				case 's':
					printed += print_string(args);
					i = i + 2;
					break;
				case '%':
					_putchar('%');
					printed += 1;
					i = i + 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed += 2;
					i = i + 2;
					break;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			printed++;
			i++;
		}
	} va_end(args);
	return (printed);
}
