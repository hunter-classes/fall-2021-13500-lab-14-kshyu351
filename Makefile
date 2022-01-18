main: main.o MyVector.o 
	g++ -o main main.o MyVector.o -std=c++11

tests: tests.o MyVector.o 
	g++ -o tests tests.o MyVector.o -std=c++11

main.o: main.cpp MyVector.h
	g++ -c main.cpp -std=c++11
tests.o: tests.cpp doctest.h MyVector.h
	g++ -c tests.cpp -std=c++11


MyVector.o: MyVector.cxx MyVector.h 

clean:
	rm -f *.o 