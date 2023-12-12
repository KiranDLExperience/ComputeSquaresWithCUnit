CC= gcc
FLAGS = -W -e 
SRC = *.c
HEADERS = *.h
OBJ = $(SRC:.c=.o)
$(OBJ): $(SRC) $(HEADERS)
	$(CC) -c $(SRC)

makelib: clean $(OBJ)
	ar -rcs CompSqLib.a CompSq.o

makeexe: makelib
	$(CC) UnitTestcases.c -L. -l:CompSqLib.a -o runtest
clean:
	rm -rf *.o *.a
