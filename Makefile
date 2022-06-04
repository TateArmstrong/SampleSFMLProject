all: main.o
	g++ -LC:\SFML-2.5.1\lib -static .\main.o -o SFMLSample.exe -lsfml-graphics -lsfml-window -lsfml-system
	
main.o: main.cpp
	g++ -IC:\SFML-2.5.1\include -c main.cpp -o main.o

clean:
	del *.o
