# dec2bin Make file
# by Muhammed Husaam
# to make binary:
# $ make
# to remove binary
# $ make clean

# the C compiler
CC=cc

dec2bin:
	$(CC) dec2bin.c -o dec2bin
clean:
	rm dec2bin
