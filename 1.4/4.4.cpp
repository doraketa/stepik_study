#include <iostream>

using namespace std;

int main() {
    int firstInputed, secondInputed;
    cin >> firstInputed >> secondInputed;
    
    if (firstInputed > secondInputed) cout << "1" << endl;
    else if (secondInputed > firstInputed) cout << "2" << endl;
    else cout << "0" << endl;
    return 0;
}