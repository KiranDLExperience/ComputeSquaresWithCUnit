CC= gcc
FLAGS = -W -e 
SRC = ./src/*.c
HEADERS = ./header/*.h
OBJ = $(SRC:.c=.o)
$(OBJ): $(SRC) $(HEADERS)
	$(CC) -c $(SRC)

makelib: clean $(OBJ)
	ar -rcs CompSqLib.a CompSq.o

makeunittestsuite: makelib
	$(CC) CUnitTest.c -L. -l:CompSqLib.a -o runtest -lcunit
clean:
	rm -rf *.o *.a
