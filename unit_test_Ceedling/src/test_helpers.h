#ifndef _PRINTF_CUSTOM_H
#define _PRINTF_CUSTOM_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "llist.h"

int printf(const char *format, ...);
const char *get_printf_buffer();
void clear_printf_buffer();

#endif
