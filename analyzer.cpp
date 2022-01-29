#include "analyzer.h"

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
