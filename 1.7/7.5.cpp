#include <iostream>

using namespace std;

int main()
{
    int inputedArray [1000], inputedValue = 0, checkCounter = 0;
    cin >> inputedValue;
    
    for(int i = 0; i < inputedValue; i++) {
        cin >> inputedArray [i];
        if(inputedArray[i] > 0)
            checkCounter++;
    }
    
    cout << checkCounter;
    return 0;
}