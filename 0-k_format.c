#include "main.h"

/**
 * kenny_char - funcion name  of the char
 * @kenny_arg: name of argruments
 * Return: always success
 */

int kenny_char(va_list kenny_arg)
{
	char ch;

	ch = va_arg(kenny_arg, int);

	write(1, &ch, 1);
	return (1);
}

/**
 * kenny_percent - function name for percent
 * Return: always success
 */
int kenny_percent(void)
{
	char c = 37;

	write(1, &c, 1);
	return (1);
}


/**
 * kenny_str- function that handle string
 * @kenny_arg: name of variable arguements
 * Return: always success
*/
int kenny_str(va_list kenny_arg)
{
	char *s = va_arg(kenny_arg, char*);

	if (s == NULL)
	s = "(null)";
	return (write(1, s, strlen(s)));
}
