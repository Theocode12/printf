#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct specifiers - contains the specifier and a function
 * pointer to the function to execute
 * @c: specifiers
 * @f: function pointer
 */

typedef struct specifiers
{
	char c;
	void (*f)(va_list, int *);
} spesi;
int _printf(const char *format, ...);
void check_specifiers(char c, va_list ap, int *count);
int _putchar(char c);
int neg_d(va_list ap);
void rot13_spesi(va_list ap, int *count);
void char_spesi(va_list ap, int *count);
void str_spesi(va_list ap, int *count);
void rev_spesi(va_list ap, int *count);
void rev(char *str, int *count);
void bin_spesi(va_list ap, int *count);
void int_spesi(va_list ap, int *count);
void oct_spesi(va_list ap, int *count);
void uns_spesi(va_list ap, int *count);
void hex_spesi(va_list ap, int *count);
void prt_asci_spesi(va_list ap, int *count);
void c_hex_spesi(va_list ap, int *count);
char *convert_uns(unsigned int num, int base);
char *convert(int num, int base);
#endif
