#Makefile
OBJS = linuxManifest.o main.o osReflection.o

EXEC = example
CFLAGS = -Wall
HEADERS = 


all: example


example: $(OBJS)
	g++ -std=c++11 -o $(EXEC)  $(OBJS)

.cpp.o:
	g++  $(CFLAGS) -c  $< -o $@

clean:
	rm -rf *.o
	rm -f example