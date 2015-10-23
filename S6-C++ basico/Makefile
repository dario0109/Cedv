CC=g++
CXXFLAGS=-Iheaders -Wall -c
SRC=src/
OBJ=obj/
EXE=exe/

all: vec3 triangle main compile run clean

vec3: $(SRC)Vec3.cpp
	$(CC) $(CXXFLAGS) $^ -o $(OBJ)Vec3.o

triangle: $(SRC)Triangle.cpp
	$(CC) $(CXXFLAGS) $^ -o $(OBJ)Triangle.o

main: $(SRC)main.cpp
	$(CC) $(CXXFLAGS) $^ -o $(OBJ)main.o

compile: $(OBJ)Vec3.o $(OBJ)Triangle.o $(OBJ)main.o
	$(CC) $^ -o $(EXE)main

run:
	./$(EXE)main

clean:
	$(RM) $(EXE)main $(OBJ)*.o