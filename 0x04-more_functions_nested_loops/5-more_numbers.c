#include "main.h"

/**
 * more_numbers - Print the numbers 0 up to 14 10 times
 * Return: 10 times of the numbers 0 up to 14
 */

void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}

}

