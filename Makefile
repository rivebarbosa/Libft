APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all:
	gcc -c $(SRC)/Lista.c -I $(INCLUDE) -o $(OBJ) /Lista.o
	gcc -c ./src/Lista.c -I ./include -o ./obj/Lista.o
	gcc -c ./src/Time.c -I ./include -o ./obj/Time.o

run:
	echo "Seila qualquer coisa"

clean:
	rm ./obj/*.o