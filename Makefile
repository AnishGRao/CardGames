
all:
	g++ -O3 poker.cpp -o poker.o; ./poker.o
debug:
	g++ -g poker.cpp -o poker_debug.o;

clean:
	rm *.o
