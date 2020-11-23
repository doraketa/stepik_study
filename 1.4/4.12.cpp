#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int fiNumber, seNumber, thNumber, foNumber, genDX, genDY;
    cin >> fiNumber >> seNumber >> thNumber >> foNumber;
    
    genDX = abs (fiNumber - thNumber);
    genDY = abs (seNumber - foNumber);
    
    if ((genDX == 1 && genDY == 2) || (genDX == 2 && genDY == 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}