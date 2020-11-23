#include <iostream>

using namespace std;

int main() {
    int fNumber, sNumber, tNumber, foNumber;
    cin >> fNumber >> sNumber >> tNumber >> foNumber;
    
    if ((fNumber == tNumber) || (sNumber == foNumber))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}