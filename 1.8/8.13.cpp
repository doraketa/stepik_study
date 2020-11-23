#include <iostream>
using namespace std;

int main() {
    int n, m, pos = 0, row = 0;
    cin >> n >> m;
    int a[n][m];
	
    int start_row = 0;
    int number = 1;
    for (int min_row = 0; min_row < n; min_row++) {
        if (min_row > 0) start_row = pos - 1;
        else start_row = 0;
        for (pos = start_row; pos < m; pos++) {
            row = min_row;
            for (int col = pos; col >= 0; col--) {
                if (row < n) {
                    a[row][col] = number;
                    number++;
                    row++;
                }
                else break;
            }
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