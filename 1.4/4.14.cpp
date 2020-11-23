#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int inputedN, inputedM, inputedX, inputedY, outputedEx;
    cin >> inputedN >> inputedM >> inputedX >> inputedY;
   
    if (inputedN < inputedM)
        swap(inputedN, inputedM);
    
    cout << min (min (inputedM - inputedX, inputedX), min (inputedN - inputedY, inputedY));
    return 0;
}