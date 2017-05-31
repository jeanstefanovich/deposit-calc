.PHONY: all clean make

all:deposit-calc

deposit-calc: build/src/deposit.o build/src/main.o 
	mkdir -p bin
	g++ -Wall -Werror -o bin/deposit.exe build/src/deposit.o build/src/main.o

build/src/deposit.o:
	mkdir -p build/src
	g++ -I thirdparty src -Wall -Werror -c -o build/src/deposit.o build/src/deposit.c

build/src/main.o:
	mkdir -p build/src
	g++ -I thirdparty src  -Wall -Werror -c -o build/src/main.o build/src/main.c

clean:
	rm -rf bin/
	rm -rf build/

deposit_test: build/test/deposit_test.o build/test/main.o
	mkdir -p bin
	g++  -Wall -Werror -o  build/test/deposit_test.o build/test/main.o

build/test/deposit_test.o:
	mkdir -p build/test
	gcc -I thirdparty src -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o:
	mkdir -p build/test
	gcc -I thirdparty src -c test/validation_test.c -o build/test/validation_test.o

valid_test: build/test/validation_test.o build/test/main.o
	mkdir -p bin
	g++  -Wall -Werror -o  build/test/validation_test.o build/test/main.o

build/test/validation_test.o:
	mkdir -p build/test
	gcc -I thirdparty src -c test/validation_test.c -o build/test/validation_test.o