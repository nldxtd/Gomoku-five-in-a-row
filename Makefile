all: main

main: main.cpp Game.cpp Computer.cpp Board.cpp
	g++ -o main main.cpp Game.cpp Computer.cpp Board.cpp -std=c++11
	./main

clean: 
	rm main