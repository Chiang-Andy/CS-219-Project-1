
#include "analyzer.h"

//getHex
//getting hex values from file
uint32_t getHex(uint32_t hex){
    stringstream ss;
    ss << hex;
    ss >> hex;
    return hex;
} 

//hexConversion
//converting of hex decimal
//fills 0 for hex with 0x format
void hexConversion(uint32_t decimal){
    cout << "0x" << setfill('0') << setw(8) << hex << decimal << endl;
} 

//hexAddition
//adding decimal values
uint32_t hexAddition(uint32_t d1, uint32_t d2){
    uint32_t answer;
    answer = d1 + d2;
    return answer;
}