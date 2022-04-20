#include <stdlib.h>
#include "main.h"

/**
 * check_specifiers - a function that checks for the right specifier
 * @c: character
 * @ap: arguement pointer
 * @count: number of char printed
 */

void check_specifiers(char c, va_list ap, int *count)
{
	int j;
	spesi f_specifiers[] = {
		{'c', char_spesi},
		{'s', str_spesi},
		{'i', int_spesi},
		{'u', uns_spesi},
		{'d', int_spesi},
		{'b', bin_spesi},
		{'o', oct_spesi},
		{'x', hex_spesi},
		{'X', c_hex_spesi},
		{'r', rev_spesi},
		{'0', NULL},
	};
	for (j = 0; f_specifiers[j].c; j++)
	{
		if (c == f_specifiers[j].c)
			f_specifiers[j].f(ap, count);
	}
}

/**
 * _printf - formats a string and prints to the stdout
 * @format: string literal
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *ptr;
	int i, count = 0;
	va_list ap;

	ptr = format;
	if (ptr == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; ptr[i]; i++)
	{
		if (ptr[i] != '%')
		{
			_putchar(ptr[i]);
			count++;
		}
		else
		{
			i++;
			if (ptr[i] == '%')
			{
				_putchar('%');
				count++;
			}
			check_specifiers(ptr[i], ap, &count);
		}
	}
	va_end(ap);
	return (count);
}
