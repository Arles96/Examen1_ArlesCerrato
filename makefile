Main:	Starks.o FamiliasNobles.o Dothraki.o GuardiaReal.o Lannister.o Targaryen.o main.o
	g++ Starks.o FamiliasNobles.o Dothraki.o GuardiaReal.o Lannister.o Targaryen.o  main.o -o main

main.o: Starks.h Lannister.h Targaryen.h main.cpp
	g++ -c main.cpp

Starks.o:	Starks.cpp Starks.h FamiliasNobles.h
	g++ -c Starks.cpp

FamiliasNobles.o:	FamiliasNobles.cpp FamiliasNobles.h
	g++ -c FamiliasNobles.cpp

Dothraki.o:	Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp
GuardiaReal.o:	GuardiaReal.cpp GuardiaReal.h
	g++ -c GuardiaReal.cpp
Lannister.o:	Lannister.cpp Lannister.h GuardiaReal.h
	g++ -c Lannister.cpp

Targaryen.o:	Targaryen.cpp Targaryen.h Dothraki.h
	g++ -c Targaryen.cpp
