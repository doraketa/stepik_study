#include <iostream>

using namespace std;

int main() {
    int n, m, sm;
    cin >> n >> m;
    int a[n][m];

    
    int number = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) sm = 1;
        else sm = 0;
        for (int j = sm; j < m; j++) {
            a[i][j] = number;
            number++;
            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}