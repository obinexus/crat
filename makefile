CC=gcc

OBJ=./obj
LIB=./lib
bin=./bin

INCLUDE=./include

all: vector.o gifenc.o jsonp

vector.o: $(LIB)/vector.c
	$(CC) -c $(LIB)/vector.c -o $(OBJ)/vector.o -I$(INCLUDE)

jsonp: $(LIB)/jsonp.c
	$(CC) -c $(LIB)/jsonp.c -o $(OBJ)/jsonp.o -I$(INCLUDE)

gifenc.o: $(LIB)/gifenc.c
	$(CC) -c $(LIB)/gifenc.c -o $(OBJ)/gifenc.o -I$(INCLUDE)

jsonp: 
	$(CC) -o $(bin)/jsonp $(LIB)/jsonp.c  -I$(INCLUDE)
clean:
	rm -f $(OBJ)/*.o

