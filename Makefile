
all:
	g++ -O3 -std=c++17 poker.cpp -o poker.o; ./poker.o
debug:
	g++ -g  -std=c++17 poker.cpp -o poker_debug.o;

clean:
	rm *.o
