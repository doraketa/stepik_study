#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, last, temp;
    cin >> n;
    vector <int> a;

    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    last = a[n-1];
    for (int i = n-1; i > 0; i--) {
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }
    a[0] = last;

    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}