#include <iostream>

using namespace std;

int main() {
    int inputedValue;
    cin >> inputedValue;
    //cout << 10 % inputedValue << endl;
    
    if(inputedValue < 100)
            cout << inputedValue / 10 << endl;
        else if(inputedValue > 100 && inputedValue < 1000)
            cout << inputedValue / 100 << endl;            
        else if(inputedValue > 1000 && inputedValue < 33000)
            cout << inputedValue /1000 << endl; 
    return 0;
}