#Makefile
OBJS = testMove.o main.o
EXEC = main
CFLAGS = -Wall -std=c++0x
HEADERS = 
LIBS = 


all: main


main: $(OBJS)
	g++ -std=c++11 -o $(EXEC)  $(OBJS) $(LIBS)

.cpp.o:
	g++  $(CFLAGS) -c  $< -o $@

clean:
	rm -rf *.o
	rm -f main