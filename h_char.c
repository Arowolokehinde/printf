#include "main.h"

/**
 * h_char- function for char
 * @num_arg: variable list
 * Return: always success
*/

int h_char(va_list num_arg)
{
	char t;

	t = va_arg(num_arg, int);
	write(1, &t, 1);
	return (1);
}
