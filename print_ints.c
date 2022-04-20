#include "main.h"

/**
 * int_spesi - prints ints to stdout
 * @ap: pointer arguement
 * @count: number of char printed
 */

void int_spesi(va_list ap, int *count)
{
	int i;
	char *ptr;

	i = neg_d(ap);
	ptr = convert(i, 10);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}

/**
 * uns_spesi - print unsigned numbers to stdout
 * @ap: pointer arguement
 * @count: number of char printed
 */

void uns_spesi(va_list ap, int *count)
{
	unsigned int i;
	char *ptr;

	i = va_arg(ap, unsigned int);
	ptr = convert_uns(i, 10);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}

/**
 * bin_spesi - prints bin to stdout
 * @ap: pointer arguement
 * @count: number of char printed
 */

void bin_spesi(va_list ap, int *count)
{
	unsigned int i;
	char *ptr;

	i = va_arg(ap, unsigned int);
	ptr = convert_uns(i, 2);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}

/**
 * oct_spesi - prints oct to stdout
 * @ap: pointer arguement
 * @count: number of char printed
 */

void oct_spesi(va_list ap, int *count)
{
	unsigned int i;
	char *ptr;

	i = va_arg(ap, unsigned int);
	ptr = convert_uns(i, 8);
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
}