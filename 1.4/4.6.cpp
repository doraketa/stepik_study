#include <iostream>

using namespace std;

int main() {
    int inputedA, inputedB, inputedC;
    cin >> inputedA >> inputedB >> inputedC;

    if ((inputedA + inputedB > inputedC) && (inputedA + inputedC > inputedB) && (inputedB + inputedC > inputedA))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}