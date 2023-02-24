#!/bin/bash

gcc -c *.c -Wall -Werror -Wextra -pedantic -std=gnu89 -fno-pic
gcc -shared -o liball.so *.o
rm *.o
