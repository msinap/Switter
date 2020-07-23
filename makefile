CC := g++ -std=c++17

all: a.out

a.out: test.o Exception.o User.o NationalCode.o Age.o Username.o Password.o
	$(CC) make/test.o make/Exception.o make/User.o make/NationalCode.o make/Age.o make/Password.o make/Username.o 

test.o: source/Exception.h source/NationalCode.h source/User.h source/Username.h source/Age.h source/test.cpp 
	$(CC) -c source/test.cpp -o make/test.o

Exception.o: source/Exception.h source/Exception.cpp
	$(CC) -c source/Exception.cpp -o make/Exception.o

User.o: source/Password.h source/Username.h source/Age.h source/NationalCode.h source/User.h source/User.cpp
	$(CC) -c source/User.cpp -o make/User.o

NationalCode.o: source/Exception.h source/NationalCode.h source/NationalCode.cpp
	$(CC) -c source/NationalCode.cpp -o make/NationalCode.o

Age.o: source/Exception.h source/Age.h source/Age.cpp
	$(CC) -c source/Age.cpp -o make/Age.o

Password.o: source/Exception.h source/Password.h source/Password.cpp
	$(CC) -c source/Password.cpp -o make/Password.o

Username.o: source/Exception.h source/Username.h source/Username.cpp
	$(CC) -c source/Username.cpp -o make/Username.o

.PHONY: clean
clean:
	rm -r make/*.o