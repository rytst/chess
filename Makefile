chess: main.o print_board.o
	gcc -o chess main.o print_board.o

main.o: main.c defs.h
	gcc -c main.c

print_board.o: print_board.c defs.h
	gcc -c print_board.c

clean:
	rm -rf main.o print_board.o chess
