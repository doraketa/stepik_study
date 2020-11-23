#include <iostream>

using namespace std;


int main() {
    int fiValue, seValue, thValue;
    cin >> fiValue >> seValue >> thValue;
    
    if (fiValue > seValue) {
        fiValue = fiValue + seValue;
        seValue = fiValue - seValue;
        fiValue = fiValue - seValue;
    }
    
    if (seValue > thValue) {
        seValue = seValue + thValue;
        thValue = seValue - thValue;
        seValue = seValue - thValue;
    }
    
    if (fiValue > seValue) {
        fiValue = fiValue + seValue;
        seValue = fiValue - seValue;
        fiValue = fiValue - seValue;
    }
    
    cout << fiValue << " " << seValue << " " << thValue;
    return 0;
}