//Andy Chiang
//analyzer.cpp

#include "analyzer.h"

//Get the Hex object
//stringstream hex from hex.txt
uint32_t getHex(uint32_t hex){
    stringstream s;
    s << hex;
    s >> hex;
    return hex;
} 

//Finding Bitwise Operator
int Analyzer::findOperator(string function){
	for (int i = 0; i < 10; i++){
		if (function==(Operators[i])){
			return i+1;
		}
	}
	return 0;
}

int Analyzer::findRegister(string r){
    r.erase(0,1);
    return stoi(r);
}

// Calculations
void Analyzer::hexADD(){
	Rd = Rn + Rm;
}

void Analyzer::hexAND(){
	Rd = Rn & Rm;
}

void Analyzer::hexASR(){
	Rd = Rn / 2; 
}

void Analyzer::hexLSR(){
	Rd = Rn / 2; 
}

void Analyzer::hexLSL(){
	Rd = Rn * 2; 
}

void Analyzer::hexNOT(){
	Rd = ~Rn;
}

void Analyzer::hexORR(){
	Rd = Rn | Rm;
}

void Analyzer::hexSUB(){
	Rd = Rn - Rm;
}

void Analyzer::hexXOR(){
	Rd = Rn ^ Rm;
}

void Analyzer::hexMOV(){
    Rd = Rn;
}
// recieves and outputs answers for two hex values based on bitwise operator type
Analyzer::Analyzer(string function, uint32_t Rn, uint32_t Rm) : function(function), Rn(Rn), Rm(Rm){
	int type = findOperator(function);
	switch(type) {
		case 1:{ 
            hexADD();
            //cout << "0x" << hex << endl; 
            break; 
        }
		case 2:{ 
            hexAND(); 
            //cout << "0x" << hex << endl;
            break;
        }
		case 3:{ 
            hexORR(); 
            //cout << "0x" << hex << endl;
            break; 
        }
		case 4:{ 
            hexSUB(); 
            //cout << "0x" << hex << endl;
            break; 
        }
		case 5:{ 
            hexXOR();
            //cout << "0x" << hex << endl;
             break; 
        }
        case 6:{
            //hexMOV();
            break;
        }
    	default:{ 
            break; 
        }
	}
}

// recieves and outputs answers for one hex values based on bitwise operator type
Analyzer::Analyzer(string function, uint32_t Rn) : function(function), Rn(Rn){
	int type = findOperator(function);
	switch(type){
        case 1:{ 
            hexADD();
            //cout << "0x" << hex << endl; 
            break; 
        }
		case 2:{ 
            hexAND(); 
            //cout << "0x" << hex << endl;
            break;
        }
		case 3:{ 
            //hexORR(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 4:{ 
            //hexSUB(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 5:{ 
            hexXOR();
            //cout << "0x" << hex << endl;
            break; 
        }
		case 6:{ 
            hexASR(); 
            //cout << "0x" << hex << endl;
            break; 
        }
		case 7:{ 
            hexLSR(); 
            //cout << "0x" << hex << endl;
            break; 
        }
		case 8:{ 
            hexLSL(); 
            //cout << "0x" << hex << endl;
            break; 
        }
		case 9:{ 
            hexNOT(); 
            //cout << "0x" << hex << endl;
            break; 
        case 10:{
            hexMOV();
            break;
        }
        }
    	default:{
        break;
        }
	}
}

/*
From part 1

//Get the Hex object
//stringstream hex from hex.txt
uint32_t getHex(uint32_t hex){
    stringstream s;
    s << hex;
    s >> hex;
    return hex;
} 

//hexAddition
//adding decimal values
uint32_t hexAddition(uint32_t d1, uint32_t d2){
    uint32_t answer; //uint32_t for answer to prevent issues
    answer = d1 + d2;
    return answer;
}

//conversion of hex decimal
void hexConversion(uint32_t decimal){
    cout << "0x" << hex << decimal << endl; //"0x" to set format for final value
} 
*/