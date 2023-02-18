#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);

int main(void) {
    int n = 16777216;
    int result = _sqrt_recursion(n);
    printf("The square root of %d is %d\n", n, result);
    return 0;
}