#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
=======

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
>>>>>>> 24236234bee36733c15a86c6b1a7881c4c15063b
ar -rc liball.a *.o
ranlib liball.a
