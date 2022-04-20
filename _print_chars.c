#include "main.h"

/**
 * char_spesi - fuction to print a char
 * @ap: arguement pointer
 * @count: number of char printed
 */

void char_spesi(va_list ap, int *count)
{
	_putchar(va_arg(ap, int));
	(*count)++;
}

/**
 * str_spesi - fuction to print a string
 * @ap: arguement pointer
 * @count: number of char printed
 */

void str_spesi(va_list ap, int *count)
{
	int i;
	char *ptr = va_arg(ap, char *);
	char *str = "(null)";

	if (!ptr)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
	}
}

/**
 * rev_spesi - function to reverse a string
 * @ap: arguement pointer
 * @count: number of char printed
 */

void rev_spesi(va_list ap, int *count)
{
	char *ptr = va_arg(ap, char *);

	rev(ptr, count);
}

/**
 * rev - sub-function to reverse a string
 * @str: string
 * @count: number of char
 */

void rev(char *str, int *count)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	i--;
	while (*(str + 1))
		str++;
	for (; i >= 0; i--, (*count)++)
	{
		_putchar(*(str));
		str--;
	}
}
