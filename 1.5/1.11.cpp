#include <iostream>

using namespace std;

int main() {
    int fInputed, sInputed, calcMax, lastMax;
    cin >> fInputed >> sInputed;
    
    if (fInputed >= sInputed) {
        calcMax = fInputed;
        lastMax = sInputed;
    }
    else {
        calcMax = sInputed;
        lastMax = fInputed;
    }
    while (fInputed != 0) {
        cin >> fInputed;
        if (fInputed == 0) break;
        if (calcMax <= fInputed) {
            lastMax = calcMax;
            calcMax = fInputed;
        }
        else if (lastMax < fInputed) {
            lastMax = fInputed;
        }
    }
    cout << lastMax << endl;
    return 0;
}