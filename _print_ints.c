#include "main.h"

/**
 * int_spesi - prints ints to stdout
 * @ap: pointer arguement
 */

void int_spesi(va_list ap, int *count)
{
	int i;
	char *ptr;

	i = va_arg(ap, int);
	if (i < 0)
	{
		i = -i;
		_putchar ('-');
	}
	ptr = convert(i, 10);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}
