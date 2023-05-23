home =/home/ys/Code/BooksAndLearning/Algorithms/Euclids/
file =euclids
CC=gcc
flags=-Wextra -Wall -Wfloat-equal

make:
	$(CC) -o $(file) $(file).c $(flags) 
debug:
	gcc -g $(file).c -o $(file) $(flags)

uncrustify:
	find $(home) -type f -name '*.c' -exec uncrustify --no-backup -l=C {} + 
