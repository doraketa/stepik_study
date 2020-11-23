#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double fValue, sValue, tValue, outputedResult;
    cin >> fValue >> sValue >> tValue;
    
    outputedResult = (fValue + sValue + tValue) / 2;
    outputedResult = sqrt (outputedResult * (outputedResult - fValue) * (outputedResult - sValue) * (outputedResult - tValue));
    cout << outputedResult << endl;
    return 0;
}