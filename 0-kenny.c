#include "main.h"

/**
 * _printf- function that produces output according to a format.
 * @format: the string
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int amount = 0;
	va_list num_arg;

	if (format == NULL)
		return (-1);
	va_start(num_arg, format);
	while (*format)
	{
	if (*format != '%')
	{
	write(1, format, 1);
	amount++;
	}
	else
	{
	format++;
	if (*format == '\0')
		break;
	if (*format == 'c')
	{
		amount = amount + h_char(num_arg);
	}
	else if (*format == 's')
	{
		amount = amount + h_string(num_arg);
	} else if (*format == '%')
		{
		write(1, format, 1);
		amount++;
		}
	}
	format++;
	}
	va_end(num_arg);
	return (amount);
}
