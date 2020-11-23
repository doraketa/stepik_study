#include <iostream>

using namespace std;

int main() {
    int firstValue, secondValue, thirdValue, outputedValue;
    cin >> firstValue >> secondValue >> thirdValue;
    outputedValue = (1 + (firstValue - thirdValue - 1) / (secondValue - thirdValue));
    cout << outputedValue << endl;
    return 0;
}