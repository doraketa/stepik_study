#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int inputedN, inputedM, inputedK;
    cin >> inputedN >> inputedM >> inputedK;
    
    if (inputedK < inputedN * inputedM && ((inputedK % inputedN == 0) || (inputedK % inputedM == 0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}