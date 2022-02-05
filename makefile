out: main.o turtlefractals.o 
	g++ -std=c++11 main.o turtlefractals.o -o out

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

turlefractals.o: turtlefractals.cpp turtlefractals.h
	g++ -std=c++11 -c turtlefractals.cpp

cl:
	rm *.o out
