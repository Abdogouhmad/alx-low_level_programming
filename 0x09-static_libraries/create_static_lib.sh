#!/bin/bash
# by div_styl
#the next command will gather all the c files and compiled them at one time:
gcc -Wall -pedantic -Werror -Wextra -c *.c 
#after that put them inside the lib with this command: 
ar -rc liball.a *o
#create index with this cmd:
ranlib liball.a
