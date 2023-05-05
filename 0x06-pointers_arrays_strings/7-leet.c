#include "main.h"

/**
 * leet - function that encodes a string
 * @n: string that will be encoded
 * Return: returns encodes string
 */

char *leet(char *n)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (n[index1] == leet[index2] ||
			n[index1] - 32 == leet[index2])
				n[index] = index2 + '0';
		}
	}
	return (n);
}
