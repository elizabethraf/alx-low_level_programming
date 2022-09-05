#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -fPIC *.c

gcc *.o -shared -o liball.so
