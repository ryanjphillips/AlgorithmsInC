home =/home/ys/Code/BooksAndLearning/Algorithms/Euclids/
file =euclids
CC=gcc
flags=-Wextra -Wall -Wfloat-equal

make:
	gcc -o $(file) $(file).c $(flags) 

uncrustify:
	find $(home) -type f -name '*.c' -exec uncrustify --no-backup -l=C {} + 
