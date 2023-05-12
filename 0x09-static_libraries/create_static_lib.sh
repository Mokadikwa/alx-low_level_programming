#1/bin/bash
gcc -Wall -Werror -pedantic -c -c *.c
ar -rc liball.a *.o
ranlib liball.a
