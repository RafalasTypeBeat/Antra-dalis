programa: main.o funkcijos.o mokiniai.o
	g++ main.o funkcijos.o mokiniai.o -o programa

mainV.o: main.cpp
	g++ -c -O3 main.cpp

funkcijosV.o: funkcijos.cpp
	g++ -c -O3 funkcijos.cpp

mokiniai.o: mokiniai.cpp
	g++ -c -O3 mokiniai.cpp

clean:
	rm *.o programa