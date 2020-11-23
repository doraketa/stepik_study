#include <iostream>

using namespace std;

int main() {
    int inputedN, xCounter = 1;
    cin >> inputedN;
    while (xCounter * xCounter <= inputedN){
        cout << xCounter * xCounter << " ";
        xCounter++;
    }
    return 0;
}