#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double inputedValue;
    cin >> inputedValue;
    
    cout << inputedValue - trunc (inputedValue) << endl;
    return 0;
}