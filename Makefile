all: Test random.o

random.o: random.cpp
	g++ -Wall -std=c++11 -c random.cpp

Test: random.cpp test.cpp
	g++ -Wall -std=c++11 -o Test test.cpp

clean:
	rm Test *.o *~
