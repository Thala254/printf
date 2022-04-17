#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int print_percent(va_list ap __attribute__((unused)));
int print_char(va_list ap);
int print_str(va_list ap);
int _printf(const char *format, ...);

#endif
