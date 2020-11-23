#include <iostream>

using namespace std;

int main()
{
    int inputedValue, outputedValue;
    cin >> inputedValue;
    
    outputedValue = (inputedValue % 10) * 10 + ((inputedValue / 10) % 10) - inputedValue / 100 + 1;
    cout << outputedValue << endl;
    return 0;
}