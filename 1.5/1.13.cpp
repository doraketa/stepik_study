#include <iostream>

using namespace std;

int main() {
    int fibOne = 1, fibTwo = 1, currentValue = 2, inputedValue = 0, tempCurrent;
    cin >> inputedValue;
    
    while (fibTwo < inputedValue)
    {
        tempCurrent = fibTwo;
        fibTwo += fibOne;
        fibOne = tempCurrent;
        currentValue++;
    }
    
    if (fibTwo == inputedValue)
        cout << currentValue << endl;
    else
        cout << "-1" << endl;
    return 0;
}