#!/usr/bin/env bash
rm a.out
gcc binary_tree_print.c main.c $1 $2 $3
./a.out