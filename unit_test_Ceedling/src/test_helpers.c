#include "test_helpers.h"

#define PRINTF_BUFFER 1024
static char printf_buffer[PRINTF_BUFFER];

int printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    // Calculate the current length of the string in the buffer
    size_t current_length = strlen(printf_buffer);
    int result = vsnprintf(printf_buffer + current_length, PRINTF_BUFFER, format, args);
    va_end(args);
    return result;
}

const char *get_printf_buffer()
{
    return printf_buffer;
}

void clear_printf_buffer()
{
    memset(printf_buffer, 0, sizeof(printf_buffer));
}
