#include "main.h"

/**
 * convert - create an array of a number in base 2 and 10
 * @num: the number
 * @base: the base
 * Return: pointer to the array
 */

char *convert(int num, int base)
{
	static const char rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*(--ptr) = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

/**
 * convert_uns - create array of a number in base 8 and 16
 * @num: the number
 * @base: the base
 * Return: pointer to array
 */

char *convert_uns(unsigned int num, int base)
{
	char rep[] = "0123456789abcdef";
	static char buf[50];
	char *ptr;

	ptr = &buf[49];
	*ptr = '\0';
	do {
		*(--ptr) = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

/**
 * neg_d - determines if the int arguement is negative
 * @ap: arguement pointer
 * Return: the integer the arguement pointer holds
 */

int neg_d(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	return (i);
}
