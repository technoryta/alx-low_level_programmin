#!/usr/bin/sh

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o

