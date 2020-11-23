#include <iostream>

using namespace std;

int main() {
    int iValue, iMaximum, sCounter = 0;
    cin >> iValue;
    
    iMaximum = iValue;
    
    while (iValue != 0)
    {
        if (iValue > iMaximum) {
            iMaximum = iValue;
            sCounter = 1;
        } else if (iValue == iMaximum) {
            sCounter += 1;
        }
        
        cin >> iValue;
    }
    cout << sCounter << endl;
}