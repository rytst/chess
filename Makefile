chess: main.o board.o
	gcc -o chess main.o board.o

main.o: main.c defs.h
	gcc -c main.c

board.o: board.c defs.h
	gcc -c board.c

clean:
	rm -rf main.o board.o chess
