#include <iostream>

using namespace std;

int main() {
    int enteredSumm = 0, inputedValue;
    cin >> inputedValue;
    
    while (inputedValue != 0)
    {
        enteredSumm += inputedValue;
        cin >> inputedValue;
    }
    
    cout << enteredSumm << endl;
    
    return 0;
}