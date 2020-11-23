#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    return abs(x - xc)*abs(x - xc) + abs(y - yc)*abs(y - yc) <= r*r;
}

int main() {
    double  x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r)) {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}