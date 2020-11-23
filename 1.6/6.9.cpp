#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n = -1, x = -1, s, sum = 0, sqr_x = 0, r;
    while (x != 0) {
        cin >> x;
        sum = sum + x;
        n = n + 1;
        sqr_x = sqr_x + x * x;
    }

    s = sum / n;
    r = sqrt((sqr_x + n * s * s - 2 * sum * s) / (n - 1));
    cout << fixed << setprecision(11);
    cout << r;
    
    return 0;
}