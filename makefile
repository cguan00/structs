all: structs.o main.o
	gcc -o structsTest structs.o main.o

structs.o: structs.c structs.h
	gcc -c structs.c

main.o: main.c structs.h
	gcc -c main.c

run:
	./structsTest

clean:
	rm *.o
	rm *~
