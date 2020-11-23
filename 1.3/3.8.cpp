#include <iostream>

using namespace std;

int main() {
    int inputedValue, resultValue, outputedValue;
    cin >> inputedValue;
    
    outputedValue = inputedValue % 10;
    resultValue += outputedValue;
    outputedValue = inputedValue % 100 / 10;
    resultValue += outputedValue;
    outputedValue = inputedValue % 1000 / 100;
    resultValue += outputedValue;
    
    cout << resultValue << endl;
    return 0;
}