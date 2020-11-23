#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, med = 0, i = 0;
    while (a != 0) 
    {
        cin >> a;
        if (a == 0) break;
        i = i + 1;
        med = med + a;
    }

    cout << fixed << setprecision(11);
    cout << (double) med / i;
    return 0;
}