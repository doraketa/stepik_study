#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double inputedValue;
    int convertedResult;
    cin >> inputedValue;
    
    convertedResult = trunc (inputedValue * 10);
    convertedResult = convertedResult % 10;
    cout << convertedResult << endl;
    return 0;
}