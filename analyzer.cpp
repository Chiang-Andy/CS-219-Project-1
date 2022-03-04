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
	for (int i = 0; i < 9; i++){
		if (function==(Operators[i])){
			return i+1;
		}
	}
	return 0;
}

// Calculations
void Analyzer::hexADD(){
	hex = a + b;
}

void Analyzer::hexAND(){
	hex = a & b;
}

void Analyzer::hexASR(){
	hex = a / 2; 
}

void Analyzer::hexLSR(){
	hex = a / 2; 
}

void Analyzer::hexLSL(){
	hex = a * 2; 
}

void Analyzer::hexNOT(){
	hex = ~a;
}

void Analyzer::hexORR(){
	hex = a | b;
}

void Analyzer::hexSUB(){
	hex = a - b;
}

void Analyzer::hexXOR(){
	hex = a ^ b;
}

// recieves and outputs answers for two hex values based on bitwise operator type
Analyzer::Analyzer(string function, uint32_t a, uint32_t b) : function(function), a(a), b(b){
	int type = findOperator(function);
	switch(type) {
		case 1:{ 
            hexADD();
            cout << "0x" << hex << endl; 
            break; 
        }
		case 2:{ 
            hexAND(); 
            cout << "0x" << hex << endl;
            break;
        }
		case 3:{ 
            hexORR(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 4:{ 
            hexSUB(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 5:{ 
            hexXOR();
            cout << "0x" << hex << endl;
             break; 
        }
    	default:{ 
            break; 
        }
	}
}

// recieves and outputs answers for one hex values based on bitwise operator type
Analyzer::Analyzer(string function, uint32_t a) : function(function), a(a){
	int type = findOperator(function);
	switch(type){
        case 1:{ 
            hexADD();
            cout << "0x" << hex << endl; 
            break; 
        }
		case 2:{ 
            hexAND(); 
            cout << "0x" << hex << endl;
            break;
        }
		case 3:{ 
            hexORR(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 4:{ 
            hexSUB(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 5:{ 
            hexXOR();
            cout << "0x" << hex << endl;
             break; 
        }
		case 6:{ 
            hexASR(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 7:{ 
            hexLSR(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 8:{ 
            hexLSL(); 
            cout << "0x" << hex << endl;
            break; 
        }
		case 9:{ 
            hexNOT(); 
            cout << "0x" << hex << endl;
            break; 
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