all: program

program: main.o 
	g++ main.o -o program

main.o: main.cpp
	g++ -c main.cpp



clean:
	rm -f *.o program
