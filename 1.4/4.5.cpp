#include <iostream>

using namespace std;

int main()
{
    int firstValue, secondValue, thirdValue, maxValue;
    
    cin >> firstValue >> secondValue >> thirdValue;
    
    if (firstValue > secondValue)  
        maxValue = firstValue ;
    else 
        maxValue = secondValue ;
    if (maxValue < thirdValue) 
        maxValue = thirdValue;
    cout << maxValue << endl;
    return 0;
}