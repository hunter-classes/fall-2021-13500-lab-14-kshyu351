main: main.o 
	g++ -o main main.o -std=c++11

tests: tests.o
	g++ -o tests tests.o -std=c++11

main.o: main.cpp MyVector.h MyVector.cxx
	g++ -c main.cpp -std=c++11
tests.o: tests.cpp doctest.h MyVector.h MyVector.cxx
	g++ -c tests.cpp -std=c++11

clean:
	rm -f *.o 