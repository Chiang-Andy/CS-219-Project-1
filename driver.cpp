#include "analyzer.cpp"

//main
int main(){
    string FILENAME;
    cout << "Input the filename." << endl;
    cin >> FILENAME;
    uint32_t decimal;

    cout << "0x" << setfill('0') << setw(8) << hex << decimal << endl;

    ifstream file(FILENAME);
    if(file.is_open()){
        string add;
        uint32_t a, b;
        while(file >> add >> hex >> a >> b){
            cout << add << " ";
            cout << "0x" << a << " + ";
            cout << "0x" << b << " = ";
            uint32_t d1 = getHex(a);
            uint32_t d2 = getHex(b);
            hexConversion(hexAddition(d1, d2));
        }
    }
    else{
        cout << "Please input correct filename" << endl;
        cout << "Example: filename.txt" << endl;
    }
    file.close();
}
