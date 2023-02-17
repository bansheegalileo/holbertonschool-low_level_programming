#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: string to print
 */
void _puts(char *str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

void _puts_recursion(char *s) {
    if (*s == '\0') {
        _puts("");
        return;
    }
    _puts(s);
}
