#include <iostream>

using namespace std;

int main() {
    int maxElement = 0, settedElement = -1;
    while (settedElement != 0)
    {
        cin >> settedElement;
        
        if (settedElement > maxElement)
            maxElement = settedElement;
    }
    
    cout << maxElement << endl;
    
    return 0;
}