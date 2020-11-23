#include <iostream>

using namespace std;

int main() {
    int firstInput, secondInput, outputedValue;
    cin >> firstInput >> secondInput;
    outputedValue = ((firstInput * secondInput) % 109 + 109) % 109;
    cout << outputedValue << endl;
    return 0;
}