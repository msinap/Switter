CC := g++ -std=c++11

all: a.out

a.out: test.o Exception.o NationalCode.o
	$(CC) make/test.o make/Exception.o make/NationalCode.o 

test.o: source/Exception.h source/NationalCode.h source/test.cpp 
	$(CC) -c source/test.cpp -o make/test.o

Exception.o: source/Exception.h source/Exception.cpp
	$(CC) -c source/Exception.cpp -o make/Exception.o

NationalCode.o: source/Exception.h source/NationalCode.h source/NationalCode.cpp
	$(CC) -c source/NationalCode.cpp -o make/NationalCode.o

.PHONY: clean
clean:
	rm -r make/*.o