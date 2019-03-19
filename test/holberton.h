#ifndef PRINT_EFF
#define PRINT_EFF
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
  * struct types - Structure containing functions.
  * @type: Character being tested against pointed array of functions.
  * @f: Pointed function being used if there's a match found.
  */
typedef struct types
{
	char type;
	int (*f)();
} types;

unsigned int _strlen(char *str);
int _putchar(char c);
int print_char(va_list parameter, unsigned int count);
int print_string(va_list parameter, unsigned int count);
int _printf(const char *format, ...);
#endif
