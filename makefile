all: hex
hex: analyzer.o driver.cpp
	g++ -std=c++11 analyzer.o driver.cpp -o hex

analyzer.o: analyzer.cpp analyzer.h
	g++ -c -std=c++11 analyzer.cpp

clean:
	rm *.o hex