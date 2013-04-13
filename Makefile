all: main clean
main: main.o driver.o linkedList.o
	g++ -Wall main.o driver.o linkedList.o -o main.r
main.o: main.cpp driver.h 
	g++ -Wall -c main.cpp
driver.o: driver.cpp driver.h linkedList.h
	g++ -Wall -c driver.cpp
linkedList.o: linkedList.cpp linkedList.h
	g++ -Wall -c linkedList.cpp
clean:
	rm -rf *o