#include "main.h"

/**
 * g_width- function for printing width
 * @style: The style that prints arguements
 * @k: arguements to be printed
 * @number: The numbers of argumentsto be printed
 * Return: The width for formatting.
 */

int g_width(const char *style, int *k, va_list number)
{
	int kur_c;
	int width = 0;

	for (kur_c = *k + 1; style[kur_c] != '\0'; kur_c++)
	{
	if (digit(style[kur_c]))
	{
	width = (width * 10) + (style[kur_c] - '0');
	}
	else if (style[kur_c] == '*')
	{
	kur_c++;
	width = va_arg(number, int);
	break;
	}
		else
	{
		break;
	}
	}
		*k = kur_c - 1;
	return (width);
}
