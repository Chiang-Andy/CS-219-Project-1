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
			Analyzer functionFinder;
			if (functionFinder.findOperator(function) > 5){ 
				file >> hex >> a; // hex a
				cout << "0x" << hex << a << " " << function << " = "; 
				Analyzer analyzer(function, a);
			}
			else{ 
				file >> hex >> a >> b; // hex a and b
				cout << "0x" << hex << a << " " << function << " " << "0x" << hex << b << " = ";
				Analyzer analyzer(function, a, b); 
			}
		}
 	}
  	else{ //incorrect filename
        cout << "Please input correct filename." << endl;
    }
    return 0;
}
