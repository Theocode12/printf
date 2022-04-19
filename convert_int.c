#include "main.h"

/**
 * convert - create an array of a number printed in any base
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
