#include "main.h"

/**
 * ken_d- function that converts to integer
 * @kenny_arg: name of variable arguements
 * Return: always success
*/

int ken_d(va_list kenny_arg)
{
	int n = va_arg(kenny_arg, int);
	int fig, end = n % 10, dig, p = 1;
	int k = 1;

	n = n / 10;
	fig = n;

	if (end < 0)
	{
		_putchar('-');
		fig = -fig;
		n = -n;
		end = -end;
		k++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			p = p * 10;
			fig = fig / 10;
		}
		fig = n;
		while (p > 0)
		{
			dig = fig / p;
			_putchar(dig + '0');
			fig = fig - (dig * p);
			p = p / 10;
			k++;
		}
	}
	_putchar(end + '0');
	return (k);
}

/**
 * ken_i- function that converts to integer
 * @kenny_arg: name of the function arguements
 * Return: always success
*/

int ken_i(va_list kenny_arg)
{
	int n = va_arg(kenny_arg, int);
	int fig, end = n % 10, dig, p = 1;
	int k = 1;

	n = n / 10;
	fig = n;

	if (end < 0)
	{
		_putchar('-');
		fig = -fig;
		n = -n;
		end = -end;
		k++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			p = p * 10;
			fig = fig / 10;
		}
		fig = n;
		while (p > 0)
		{
			dig = fig / p;
			_putchar(dig + '0');
			fig = fig - (dig * p);
			p = p / 10;
			k++;
		}
	}
	_putchar(end + '0');
	return (k);
}
