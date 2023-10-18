#include "main.h"


/**
 * g_flag - function to determine formatting instruction
 * @style: integer
 * @k: text with format style.
 * Return: always success.
 */

int g_flag(const char *style, int *k)
{
	const char SIGNS[] = {'-', '+', '0', '#', ' ', '\0'};
	const int SIGNS_VALUES[] = {1, 2, 4, 6, 8, 16, 0};

	int p, c;
	int amount = 0;

	for (c = *k + 1; style[c] != '\0'; c++)
	{
		for (p = 0; SIGNS[p] != '\0'; p++)
		{
			if (style[c] == SIGNS[p])
			{
				amount |= SIGNS_VALUES[p];
				break;
			}
		}
		if (SIGNS[p] == 0)
		break;
	}
	*k = c - 1;
	return (amount);
}
