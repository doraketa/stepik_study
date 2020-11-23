#include <iostream>

using namespace std;

int main() {
    int inputedCount, fIterator = 0;
    cin >> inputedCount;
    
    while (inputedCount) {
        fIterator += inputedCount % 2;
        inputedCount /= 2;
    }
  
    if (fIterator == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}