#!/bin/bash
gcc -Wextra -pedantic -Werror -c *.c
ar rc liball.a *.o
ranlib liball.a
