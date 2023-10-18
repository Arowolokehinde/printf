#include "main.h"

/**
 * hand_p - function that process different data
 * @sty: string for printing
 * @cop: index
 * @number: name of the list of data to print
 * @buff: printed storage for char
 * @flag: instruction for printing
 * @wid: the width
 * @pre: variable for precision
 * @size: data size
 * Return: always success
*/

int hand_p(const char *sty, int *cop, va_list number, char buff[], int flag,
	int wid, int pre, int size)
{
	int k, len = 0, p = -1;

	sty_l sty_type[] = {
	{'c', print_char}, {'s', p_string}, {'%', p_percent},
	{'i', p_int}, {'d', p_int}, {'b', p_binary},
	{'u', p_unsgned}, {'o', p_octal}, {'x', p_hexadecimal},
	{'X', p_hexa_upper}, {'p', p_pointer}, {'S', p_nonprintable},
	{'r', p_reverse}, {'R', p_rot13string}, {'\0', NULL}
	};

	for (k = 0; sty_type[k].sty != '\0'; k++)
	if (sty[*cop] == sty_type[k].sty)
	return (sty_type[k].fn(number, buff, flag, wid, pre, size));

	if (sty_type[k].sty == '\0')
	{
	if (sty[*cop] == '\0')
	return (-1);
	len = len + write(1, "%%", 1);
	if (sty[*cop - 1] == ' ')
	{
	len = len + write(1, " ", 1);
	}
	else if (wid)
	{
	--(*cop);
	while (sty[*cop] != ' '  && sty[*cop] != '%')
	--(*cop);
	if (sty[*cop] == ' ')
	--(*cop);
		return (1);

	}
	len = len + write(1, &sty[*cop], 1);
		return (len);

	}

	return (p);
}
