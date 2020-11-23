#include <iostream>

using namespace std;

int main() {
    int firstValue, secondValue;
    cin >> firstValue >> secondValue;
    
    if (firstValue > secondValue)
        cout << firstValue << endl;
    else 
        cout << secondValue << endl;
    return 0;
}