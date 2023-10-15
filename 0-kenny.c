#include "main.h"
/**
 * p_string- function to print string
 * @s: string
 * Return: length of the string
*/
void p_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	write(1, s, len);
}
/**
 * _printf- function that produces output according to a format.
 * @format: the string
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	char t, *k;
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
	t = va_arg(num_arg, int);
	write(1, &t, 1);
	amount++;
	}
	else if (*format == 's')
	{
		k = va_arg(num_arg, char*);
		p_string(k);
			amount = amount + strlen(k);
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
