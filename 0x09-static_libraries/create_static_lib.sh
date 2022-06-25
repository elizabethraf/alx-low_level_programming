#!/bin/bash

for LIBS in $(ls *.o); do
ar -rcs libmy.a $LIBS;
done


