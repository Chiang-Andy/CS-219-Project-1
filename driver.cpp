//Name: Andy Chiang
//Date: 2-28-2022
//driver.cpp

#include "analyzer.h"

//main
int main(){
    std::map<std::string, uint32_t> registers;
	registers.insert(std::pair<std::string, uint32_t>("r0",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r1",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r2",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r3",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r4",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r5",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r6",0x0));
	registers.insert(std::pair<std::string, uint32_t>("r7",0x0));
	registers.insert(std::pair<std::string, uint32_t>("#",0x0));
    


    string FILENAME;
    cout << "Input the filename." << endl;
    cout << "Example: filename.txt" << endl;
    cin >> FILENAME;

    ifstream file(FILENAME);
    if(file.is_open()){
        string function, Rd, Rn, Rm;
        //uint32_t a, b;
        while (file >> function){
			Analyzer Operator;
			if (Operator.findOperator(function) > 5){ //finds operator
				file >> Rd >> Rn; 
				cout << function << " " << Rd << " " << Rn << endl; 
                Analyzer analyzer(function, registers[Rn]);
				registers[Rd] = analyzer.getRd();
                cout << "     " << Rd << " = 0x" << hex << registers[Rd] << endl;
			}
			else{ 
                file >> Rd >> Rn >> Rm; 
				cout << function << " " << Rd << " " << Rn << " " << Rm << endl; 
				Analyzer analyzer(function, registers[Rn], registers[Rm]);
				registers[Rd] = analyzer.getRd();
                cout << "     " << Rd << " = 0x" << hex << registers[Rd] << endl;
			}
		}
 	}
  	else{ //incorrect filename
        cout << "Please input correct filename." << endl;
    }
    return 0;
}

/* 
from part 2
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
*/
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