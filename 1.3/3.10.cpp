#include <iostream>

using namespace std;

int main() {
    int firstClass, secondClass, thirdClass, outputedValue;
    cin >> firstClass >> secondClass >> thirdClass;
    outputedValue = ((firstClass + 1) / 2) + ((secondClass + 1) / 2) + ((thirdClass + 1) / 2);
    cout << outputedValue << endl;
    
  return 0;
}