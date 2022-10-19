#!/bin/bash

#this script will create a new static library

#compile all .c files in .o files in the current directory
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

#creation of the new static library with all the .o files in the current directory
ar -rc liball.a *.o
