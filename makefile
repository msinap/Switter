CC := g++ -std=c++11

all: a.out

a.out: test.o Exception.o 
	$(CC) make/test.o make/Exception.o 

test.o: source/Exception.h source/test.cpp 
	$(CC) -c source/test.cpp -o make/test.o

Exception.o: source/Exception.h source/Exception.cpp
	$(CC) -c source/Exception.cpp -o make/Exception.o

.PHONY: clean
clean:
	rm -r make/*.o