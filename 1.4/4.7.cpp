#include <iostream>

using namespace std;

int main() {
    int fNumber, sNumber, tNumber;
    cin >> fNumber >> sNumber >> tNumber;
    
    if (fNumber == sNumber && fNumber == tNumber)
        cout << 3;
    else if (fNumber == sNumber || fNumber == tNumber || sNumber == tNumber)
        cout << 2;
    else
        cout << 0;
    
    return 0;
}