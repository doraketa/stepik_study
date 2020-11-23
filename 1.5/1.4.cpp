#include <iostream>

using namespace std;

int main() {
    int inputedValue, fIterator;
    cin >> inputedValue;
    
    fIterator = 2;
    
    while (inputedValue % fIterator != 0)
        fIterator += 1;
    cout << fIterator << endl;
    return 0;
}