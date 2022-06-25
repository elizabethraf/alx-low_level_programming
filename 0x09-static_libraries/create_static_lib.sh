#!/bin/bash

for LIBS in $(ls *.o); do
ar -rcs liball.a $LIBS;
done


