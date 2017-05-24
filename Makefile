.PHONY: all clean make

all:deposit-calc

deposit-calc: src/deposit.o src/main.o 
	mkdir -p bin
	g++ -Wall -Werror -o bin/deposit.exe build/deposit.o build/main.o

build/src/deposit.o:
	mkdir -p build
	g++ -Wall -Werror -c -o build/src/deposit.o src/deposit.c

build/src/main.o:
	mkdir -p build
	g++ -Wall -Werror -c -o build/src/main.o src/main.c

clean:
	rm -rf bin/ build/

validtest: deposit_test.o /main.o
	