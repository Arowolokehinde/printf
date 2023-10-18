#include "main.h"

/**
 * g_size - function that calculate the size
 * @style: Format of string in which to print the arguments
 * @k: arguments to be printed
 * Return: it should return precision
 */
int g_size(const char *style, int *k)
{
int kur_c = *k + 1;
	int size = 0;

	if (style[kur_c] == 'l')
		size = S_LONG;
	else if (style[kur_c] == 'h')
		size = S_SHORT;

	if (size == 0)
		*k = kur_c - 1;
	else
		*k = kur_c;
	return (size);
}
