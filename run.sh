#!/usr/bin/env bash
rm a.out
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c main.c $1 $2
./a.out