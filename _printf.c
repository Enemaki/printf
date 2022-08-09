#include "main.h"
/**
 * _printf- function that produces output according to a format
 * @format: a character string
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int printed;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed = print_char(args);
					i = i + 2;
					break;
				case 's':
					printed = print_string(args);
					i = i + 2;
					break;
				case '%':
					_putchar('%');
					printed = 1;
					i = i + 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i = i + 2;
					break;
			}
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed++;
		}
	}
	va_end(args);

	return (printed);
}
