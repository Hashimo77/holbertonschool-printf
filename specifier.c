#include "main.h"

/**
 * handle_specifier - handles a format specifier
 * @c: specifier character
 * @args: argument list
 *
 * Return: number of characters printed
 */
int handle_specifier(char c, va_list args)
{
	char ch, *str;
	int count = 0;

	if (c == 'c')
	{
		ch = (char)va_arg(args, int);
		write(1, &ch, 1);
		count++;
	}
	else if (c == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(null)";
		while (*str)
		{
			write(1, str, 1);
			str++;
			count++;
		}
	}
	else if (c == 'd' || c == 'i')
		count += print_number(va_arg(args, int));
	else if (c == '%')
	{
		write(1, "%", 1);
		count++;
	}
	else
	{
		write(1, "%", 1);
		write(1, &c, 1);
		count += 2;
	}
	return (count);
}
