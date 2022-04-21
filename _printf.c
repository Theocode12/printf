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
 * edge_cases - a function that takes into consideration edge cases
 * @c: char passed
 * @count: counts chars to be printed
 */

void edge_cases(char c, int *count)
{
	if (c == '%')
	{
		_putchar('%');
		count++;
	}
	else if (c  ==  '!')
	{
		_putchar('%');
		_putchar('!');
		count += 2;
		}
	else if (c == 'K')
	{
		_putchar('%');
		_putchar('K');
		count += 2;
	}
}

/**
 * _printf - formats a string and prints to the stdout
 * @format: string literal
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			edge_cases(format[i], &count);
			check_specifiers(format[i], ap, &count);
		}
	}
	va_end(ap);
	return (count);
}
