#!/bin/bash

for PROG in $(ls *.c); do
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c $PROG -o ${PROG%.*}.o
done

for LIBS in $(ls *.o); do
ar -rc liball.a $LIBS;
done

ranlib liball.a


