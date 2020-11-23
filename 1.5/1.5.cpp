#include <iostream>

using namespace std;

int main() {
    int settedStep = 1, countN;
    cin >> countN;
    
    while(settedStep <= countN) 
    {
        cout << settedStep << " ";
        settedStep += settedStep;
    }
    return 0;
}