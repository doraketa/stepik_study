#include <iostream>

using namespace std;

int main() {
    int inputedValue = 0, outputedValue = 0;
	cin >> inputedValue;
	outputedValue = (inputedValue / 10) % 10;
	cout << outputedValue << endl;
    return 0;
}