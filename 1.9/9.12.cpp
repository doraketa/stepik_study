#include <iostream>
#include <iomanip>

using namespace std;

double power(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return power(a*a, n/2);
    return a * power(a, n - 1);
}

int main() {
    double  a;
    int n;
    cin >> a >> n;
    cout << fixed << setprecision(5);
    cout << power(a,n);
    return 0;
}