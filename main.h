#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct kenny
{
	char *kenny_arg;
	int(*k_func)();
}k_struct;

int _printf(const char *format, ...);
int kenny_percent(void);
int kenny_char(va_list kenny_arg);
int ken_i(va_list kenny_arg);
int ken_d(va_list kenny_arg);
int kenny_str(va_list kenny_arg);
int _putchar(char c);


#endif
