#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype for _printf */
int _printf(const char *format, ...);

/* Prototype for handling a single format specifier */
int handle_specifier(char c, va_list args);

#endif /* MAIN_H */

