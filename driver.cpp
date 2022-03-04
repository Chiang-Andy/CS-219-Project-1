//Name: Andy Chiang
//Date: 2-28-2022
//driver.cpp

#include "analyzer.h"

//main
int main(){
    string FILENAME;
    cout << "Input the filename." << endl;
    cout << "Example: filename.txt" << endl;
    cin >> FILENAME;

    ifstream file(FILENAME);
    if(file.is_open()){
        string function;
        uint32_t a, b;
        while (file >> function){
			Analyzer Operator;
			if (Operator.findOperator(function) > 5){ //finds operator
				file >> hex >> a; // hex a
				cout << "0x" << hex << a << " " << function << " = "; //adds 0x identifier and = to end of line
				Analyzer analyzer(function, a); // calculated output
			}
			else{ 
				file >> hex >> a >> b; // hex a and b
				cout << "0x" << hex << a << " " << function << " " << "0x" << hex << b << " = "; //adds 0x identifier and = to end of line
				Analyzer analyzer(function, a, b); // calculated output
			}
		}
 	}
  	else{ //incorrect filename
        cout << "Please input correct filename." << endl;
    }
    return 0;
}

/*
from part 1

string add;
        uint32_t a, b;
        while(file >> add >> hex >> a >> b){ 
            cout << "0x" << a << " + " << "0x" << b << " = ";

            uint32_t d1 = getHex(a);
            uint32_t d2 = getHex(b);
            hexConversion(hexAddition(d1, d2));
*/