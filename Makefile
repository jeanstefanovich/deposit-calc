.PHONY: all clean make deposit_test
CC = gcc

all: deposit-calc

deposit-calc: build/src/deposit.o build/src/main.o 
	mkdir -p bin
	$(CC) -Wall -o bin/deposit.exe build/src/deposit.o build/src/main.o

build/src/deposit.o:
	mkdir -p build/src
	$(CC) -I thirdparty -I src/ -Wall -c -o build/src/deposit.o src/deposit.c

build/src/main.o:
	mkdir -p build/src
	$(CC) -I thirdparty -I src/  -Wall -c -o build/src/main.o /src/main.c

clean:
	rm -rf bin/
	rm -rf build/

deposit_test: build/test/deposit_test.o build/test/main.o build/src/deposit.o build/test/validation_test.o
	mkdir -p bin
	$(CC) -Wall -I src/ -o bin/deposit_test.exe  build/test/deposit_test.o build/test/main.o build/src/deposit.o build/test/validation_test.o

build/test/deposit_test.o:
	mkdir -p build/test
	$(CC) -I thirdparty/ -I src/ -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o:
	mkdir -p build/test
	$(CC) -I thirdparty/ -I src/ -c test/main.c -o build/test/main.o

build/test/validation_test.o:
	mkdir -p build/test
	$(CC) -I thirdparty/ -I src/ -c test/validation_test.c -o build/test/validation_test.o
