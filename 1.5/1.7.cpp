#include <iostream>
 
using namespace std;
 
int main() {
    int inputedValue, settedLenght = -1;
    
    do
    {
        settedLenght++;
        cin >> inputedValue;
    }
    
    while (inputedValue);
    cout << settedLenght;
    
    return 0;
}