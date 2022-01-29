#include "analyzer.h"

//main
int main(){
    string FILENAME;
    cout << "Input the filename." << endl;
    cout << "Example: filename.txt" << endl;
    cin >> FILENAME;

    ifstream file(FILENAME);
    if(file.is_open()){
        string add;
        uint32_t a, b;
        while(file >> add >> hex >> a >> b){ 
            cout << "0x" << a << " + " << "0x" << b << " = ";

            uint32_t d1 = getHex(a);
            uint32_t d2 = getHex(b);
            hexConversion(hexAddition(d1, d2));
        }
    }
    else{
        cout << "Please input correct filename." << endl;
    }
}
