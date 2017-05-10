.PHONY: all clean make

all:deposit-calc

deposit-calc: deposit.o main.o 
	mkdir -p bin
	g++ -Wall -Werror -o bin/deposit.exe build/deposit.o build/main.o

deposit.o:
	mkdir -p build
	g++ -Wall -Werror -c -o build/deposit.o src/deposit.c

main.o:
	mkdir -p build
	g++ -Wall -Werror -c -o build/main.o src/main.c

clean:
	rm -rf bin/ build/
