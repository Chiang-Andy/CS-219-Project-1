//Andy Chiang
//analyzer.h

#ifndef ANALYZER_H
#define ANALYZER_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Analyzer{
    uint32_t a, b = 0; //variables
	uint32_t hex = 0; //hex output, answer
	string function;
	char functionList[9][4] = {"ADD" , "AND" , "ORR" , "SUB" , "XOR" , "ASR" , "LSR" , "LSL" , "NOT"}; 

public:
    Analyzer() = default;
    Analyzer(string, uint32_t, uint32_t);
	Analyzer(string, uint32_t);
 
	void hexADD(); 
	void hexAND(); 
	void hexASR(); 
	void hexLSR(); 
	void hexLSL(); 
	void hexNOT(); 
	void hexORR(); 
	void hexSUB(); 
	void hexXOR();

	int findFunction(string func);
};

#endif

/*
uint32_t getHex(uint32_t);
void hexConversion(uint32_t);
uint32_t hexAddition(uint32_t, uint32_t);
*/