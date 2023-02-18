#!/bin/bash

gcc -c *.c -Wall -Werror -Wextra -pedantic -std=gnu89 -fno-pic
ar rcs liball.a *.o
