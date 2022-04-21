#include "main.h"

/**
 * c_hex_spesi - hexadecimal in capital letter format
 * @ap: arguement pointer
 * @count: number of chars to printed
 */

void c_hex_spesi(va_list ap, int *count)
{
	unsigned int i;
	char *ptr;

	i = va_arg(ap, unsigned int);
	ptr = convert_uns(i, 16);
	for (i = 0; ptr[i]; i++, (*count)++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			_putchar(ptr[i] - 32);
		else
			_putchar(ptr[i]);
	}
}

/**
 * hex_spesi - print hexadecimal in small letter format
 * @ap: arguement pointer
 * @count: number of chars to be printed
 */

void hex_spesi(va_list ap, int *count)
{
	unsigned int i;
	char *ptr;

	i = va_arg(ap, unsigned int);
	ptr = convert_uns(i, 16);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}

/**
 * prt_asci_spesi - print hexadecimails in place of uprintable chars
 * @ap: pointer arguement
 * @count: number of char printed
 */

void prt_asci_spesi(va_list ap, int *count)
{
	unsigned int i, j;
	char *ptr;
	char *p;

	ptr = va_arg(ap, char *);
	for (i = 0; ptr[i]; i++, (*count)++)
	{
		if (ptr[i] < 32 || ptr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			*count += 2;
			if (ptr[i] <= 15)
			{
				_putchar('0');
				(*count)++;
			}
			p = convert_uns(ptr[i], 16);
			for (j = 0; p[j]; j++, (*count)++)
				_putchar(p[j] - 32);
		}
		else
			_putchar(ptr[i]);
	}
}
