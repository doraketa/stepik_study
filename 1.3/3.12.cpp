#include <iostream>

using namespace std;

int main() {
    int inputedValue, hourValue, minuteOneValue, minuteSecondValue, secOneValue, secSecondValue;
    cin >> inputedValue;
    hourValue = (inputedValue / 3600) % 24;
    minuteOneValue = inputedValue / 60 % 60 / 10;
    minuteSecondValue = inputedValue / 60 % 60 % 10;
    secOneValue = inputedValue % 60 / 10;
    secSecondValue = inputedValue % 10;
    
    cout << hourValue << ":" << minuteOneValue << minuteSecondValue << ":" << secOneValue << secSecondValue;
    
    return 0;
}