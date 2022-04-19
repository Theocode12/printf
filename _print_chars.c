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

	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}
