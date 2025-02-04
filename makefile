all: driverExecutable
driverExecutable: driver.o analyzer.o
	g++ -o driverExecutable driver.o analyzer.o

driver.o: driver.cpp analyzer.h
	g++ -std=c++11 -c driver.cpp

analyzer.o: analyzer.cpp analyzer.h
	g++ -std=c++11 -c analyzer.cpp

clean:
	rm *.o driverExecutable