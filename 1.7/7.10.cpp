#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, difer = 1;
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
        if (a[i-1] != a[i]) difer++;
    }
    cout << difer;
    return 0;
}