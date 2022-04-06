//Andy Chiang
//analyzer.h

#ifndef ANALYZER_H
#define ANALYZER_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <algorithm>
#include <cstdint>

using namespace std;

class Analyzer{
	/* from part 1 and 2
    uint32_t a, b; //variables
	uint32_t hex; //hex output, answer
	*/
	uint32_t Rn = 0; //first operand
	uint32_t Rm = 0; //second operand 
	uint32_t Rd = 0; //third operand or final output
	string function = ""; //operator function type identifier
	char Operators[10][4] = {"ADD" , "AND" , "ORR" , "SUB" , "XOR" , "ASR" , "LSR" , "LSL" , "NOT", "MOV"}; //operators list

public:
    Analyzer(){} //default constructor
    Analyzer(string, uint32_t, uint32_t); //For two hex values
	Analyzer(string function, uint32_t Rn); //For one hex values
 
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
	void hexMOV(); //part 3 function. move the second operand to the first operand

	//uint32_t getHex(uint32_t); //get hex
	int findOperator(string); //Finding bitwise operator
	int findRegister(string);
	uint32_t getRd() const{
		return Rd;
	}
};

#endif

/*
From part 1

uint32_t getHex(uint32_t);
void hexConversion(uint32_t);
uint32_t hexAddition(uint32_t, uint32_t);
*/