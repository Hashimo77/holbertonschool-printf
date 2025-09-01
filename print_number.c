#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	char buffer[12];
	int i = 0, j, count = 0;
	unsigned int num;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
		num = n;

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		count++;
	}

	return (count);
}
