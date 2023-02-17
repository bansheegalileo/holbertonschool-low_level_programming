#include "main.h"
#include <unistd.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {
        _putchar("");
        return;
    }
    _putchar(s);
}
