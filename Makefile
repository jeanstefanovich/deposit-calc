.PHONY: all clean make

all:deposit-calc

deposit-calc: deposit.o main.o 
	g++ -Wall -Werror -o deposit.exe deposit.o main.o
	mkdir -p bin
	mv $/srs/deposit.exe ~/bin/deposit.exe

deposit.o:
	g++ -Wall -Werror -c -o deposit.o src/deposit.c
main.o:
	g++ -Wall -Werror -c -o main.o src/main.c
