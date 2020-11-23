#include <iostream>

using namespace std;

int main() {
    int fiNumber, seNumber, thNumber, foNumber;
    cin >> fiNumber >> seNumber >> thNumber >> foNumber;
    
    if ((fiNumber - thNumber == 1 or fiNumber - thNumber  == -1 or fiNumber - thNumber  == 0) and (seNumber - foNumber == 1 or seNumber - foNumber == -1 or seNumber - foNumber == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}