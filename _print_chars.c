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

	if (!ptr)
		ptr = "(null)";
	for (i = 0; ptr[i]; i++, (*count)++)
		_putchar(ptr[i]);
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

/**
 * rot13_spesi - function that gives out the rotted output of a string
 * @ap: arguement pointer
 * @count: number of char printed
 */

void rot13_spesi(va_list ap, int *count)
{
	int i, j;
	char alpha_ptr[] = "ABCDEFGHIJKLMnopqrstuvwxyz";
	char rot13_ptr[] = "NOPQRSTUVWXYZabcdefghijklm";
	char *ptr;

	ptr = va_arg(ap, char *);
	for (i = 0; ptr[i]; i++, (*count)++)
	{
		j = 0;
		if ((ptr[i] > 64 && ptr[i] < 91) || (ptr[i] > 96 && ptr[i] < 123))
		{
			while (alpha_ptr[j])
			{
				if (ptr[i] == alpha_ptr[j])
				{
					_putchar(rot13_ptr[j]);
					break;
				}
				else if (ptr[i] == rot13_ptr[j])
				{
					_putchar(alpha_ptr[j]);
					break;
				}
				j++;
			}
		}
		else
		_putchar(ptr[i]);
	}
}
