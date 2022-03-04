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
	string function; //operator function type identifier
	char Operators[9][4] = {"ADD" , "AND" , "ORR" , "SUB" , "XOR" , "ASR" , "LSR" , "LSL" , "NOT"}; //operators list

public:
    Analyzer(){} //default constructor
    Analyzer(string, uint32_t, uint32_t); //For two hex values
	Analyzer(string, uint32_t); //For one hex values
 
	//Calculating operators
	void hexADD(); 
	void hexAND(); 
	void hexASR(); 
	void hexLSR(); 
	void hexLSL(); 
	void hexNOT(); 
	void hexORR(); 
	void hexSUB(); 
	void hexXOR();

	uint32_t getHex(uint32_t); //get hex
	int findOperator(string); //Finding bitwise operator
};

#endif

/*
From part 1

uint32_t getHex(uint32_t);
void hexConversion(uint32_t);
uint32_t hexAddition(uint32_t, uint32_t);
*/