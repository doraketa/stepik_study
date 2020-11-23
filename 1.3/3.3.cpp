#include <iostream>

using namespace std;

int main() {
    int squirrelCount, nutsCount, outputResult;
    
    cin >> squirrelCount >> nutsCount;
    outputResult = nutsCount / squirrelCount;
    cout << outputResult << endl;
    
    return 0;
}