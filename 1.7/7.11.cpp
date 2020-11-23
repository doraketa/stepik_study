#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector <int> a;
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    
    for (int i = 1; i < n; i = i + 2) {
        temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
    }
    
        for (auto now : a) {
        cout << now << " ";
    }
}