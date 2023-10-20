#include "main.h"

/**
 * _printf - function name for printf
 * @format: constant char for string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_print = 0, i = 0, j;
	va_list sunday_arg;
	k_struct k[] = {{"%s", kenny_str}, {"%c", kenny_char},
		{"%i", ken_i}, {"%d",ken_d}, {"%%", kenny_percent}};

	va_start(sunday_arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (k[j].kenny_arg[0] == format[i] &&
					k[j].kenny_arg[1] == format[i + 1])
			{
				char_print += k[j].k_func(sunday_arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		write(1, &format[i], 1);
		char_print++;
		i++;
	}
	va_end(sunday_arg);
	return (char_print);
}
