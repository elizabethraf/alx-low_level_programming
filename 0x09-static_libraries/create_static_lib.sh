#!/bin/bash

for PROG in $(ls *.c); do
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c $PROG -o ${PROG%.*}.o
done

ar -rc liball.a *.o;

ranlib liball.a


