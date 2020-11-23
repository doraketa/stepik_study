#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i;
    double x, a, s = 0;
    cin >> n;
    cin >> x;
    i = n + 1;
    while (i > 0) {
        cin >> a;
        s = s * x + a;
        i = i - 1;
    }

    cout << s;
    return 0;
}