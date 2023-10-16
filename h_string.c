#include "main.h"

/**
 * h_string- function that handle string
 * @num_arg: variable name list
 * Return: always success
*/

int h_string(va_list num_arg)
{
	char *s = va_arg(num_arg, char*);

	if (s == NULL)
	return (-1);
	write(1, s, strlen(s));
	return (strlen(s));
}
