#include "main.h"

/**
 * print_a - checks if a char is printable
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int print_a(char c)
{
	if (c >= 32 && c < 127)
	return (1);

	return (0);
}

/**
 * hexa_code- Append ascci in hexadecimal code to buffer
 * @buff: character array
 * @k: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always success
 */
int hexa_code(char buff[], char ascii_code, int k)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
	ascii_code *= -1;

	buff[k++] = '\\';
	buff[k++] = 'x';

	buff[k++] = map_to[ascii_code / 16];
	buff[k] = map_to[ascii_code % 16];

	return (3);
}

/**
 * digit- checks if a char is a digit
 * @c: Char
 * Return: always success
 */
int digit(char c)
{
	if (c >= '0' && c <= '9')
	return (1);

	return (0);
}

/**
 * size_convert - function that convert size
 * @num: Number
 * @size: Number indicating the type to be size
 * Return: always success
 */
long int size_convert(long int num, int size)
{
	if (size == S_LONG)
	return (num);
	else if (size == S_SHORT)
	return ((short)num);

	return ((int)num);
}

/**
 * size_convert_unsigned- function that converts a unsigned number
 * @num: Number
 * @size: size of number
 * Return: always success
 */
unsigned long int size_convert_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
	return (num);
	else if (size == S_SHORT)
	return ((unsigned short)num);

	return ((unsigned int)num);
}
