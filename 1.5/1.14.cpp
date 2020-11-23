#include <iostream>

using namespace std;

int main() {
    int firstInput, secondInput, maxValue = 1, fIterator = 1;
    
	cin >> firstInput >> secondInput;
    while (secondInput != 0) 
    {
        if (firstInput == secondInput) {
            fIterator++;
        }
        else if (firstInput != secondInput) {
            if (fIterator > maxValue) {
                maxValue = fIterator;
                fIterator = 1;
            }
            else {
                fIterator = 1;
            }
        }
        firstInput = secondInput;
        cin >> secondInput;
        
    }

    if (maxValue > fIterator)
        cout << maxValue;
    else 
        cout << fIterator << endl;
    
        return 0;
    
}