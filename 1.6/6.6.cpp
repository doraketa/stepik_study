#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int inputedP, inputedX, inputedY, moneyBefore, moneyAfter;
    cin >> inputedP >> inputedX >> inputedY;
    
    moneyBefore = 100 * inputedX + inputedY;
    moneyAfter = moneyBefore * (100 + inputedP) / 100;
    cout << moneyAfter / 100 << " " << moneyAfter % 100;
    
    return 0;
}