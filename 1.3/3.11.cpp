#include <iostream>

using namespace std;

int main() {
    int inputedRoubles, inputedCop, inputedCountOfEat, outputedValue;
    cin >> inputedRoubles >> inputedCop >> inputedCountOfEat;
    inputedRoubles = inputedRoubles * inputedCountOfEat;
    inputedCop = inputedCop * inputedCountOfEat;
    cout << (inputedRoubles + inputedCop / 100) << " " << inputedCop % 100;
    
    return 0;
}