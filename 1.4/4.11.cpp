#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int fiNumber, seNumber, thNumber, foNumber;
    cin >> fiNumber >> seNumber >> thNumber >> foNumber;
    
    if (abs (fiNumber - thNumber) == abs (seNumber - foNumber) || fiNumber == thNumber || seNumber == foNumber)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}