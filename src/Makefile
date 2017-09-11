CC=g++
OPT1=-O1 -fomit-frame-pointer
OPT2=-O2 -fomit-frame-pointer
OPT3=-O3 -fomit-frame-pointer
DEBG=-g
VER=-std=c++11
CFLAGS=-Wall -W -Werror -lm -pedantic

SGBC: main.o cpu.o
	$(CC) $(OPT1) $(DEBG) $(VER) $(CFLAGS) -o SGBC main.o cpu.o

main.o: main.cpp
	$(CC) $(OPT1) $(DEBG) $(VER) $(CFLAGS) -c main.cpp

cpu.o: cpu.cpp
	$(CC) $(OPT1) $(DEBG) $(VER) $(CFLAGS) -c cpu.cpp

register.o: register.cpp
	$(CC) $(OPT1) $(DEBG) $(VER) $(CFLAGS) -c register.cpp

memory.o: memory.cpp
	$(CC) $(OPT1) $(DEBG) $(VER) $(CFLAGS) -c memory.cpp

remake:
	touch *.cpp *.h; make

clean:
	rm *.o SGBC
