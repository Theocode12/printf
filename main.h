#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct specifiers - contains the specifier and a function pointer to the function to execute
 * @c: specifiers
 * @f: function pointer
 */

typedef struct specifiers
{
	char c;
	void (*f)(va_list, int *);
}spesi;
int _printf(const char *format, ...);
void check_specifiers(char c, va_list ap, int *count);
int _putchar(char c);
void char_spesi(va_list ap, int *count);
void str_spesi(va_list ap, int *count);
void int_spesi(va_list ap, int *count);
char *convert(int num, int base);
#endif
