CC=gcc
DEPS=colors.h
CFLAGS=-I.
OBJ=colors.o
ODIR=../lib

all:
	$(CC) -shared -o $(ODIR)/libcolors.so -fPIC colors.c
	$(CC) -c -o $(ODIR)/colors.o colors.c
	ar rcs $(ODIR)/libcolors.a $(ODIR)/colors.o
	rm -rf $(ODIR)/colors.o

clean:
	rm -rf $(ODIR)/colors.o
	rm -rf $(ODIR)/libcolors.a
	rm -rf $(ODIR)/libcolors.so

