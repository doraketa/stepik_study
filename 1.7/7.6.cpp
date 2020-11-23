#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a;
    // считывание
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    // обработка и вывод
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) cout << a[i] << " ";
    }
    return 0;
}