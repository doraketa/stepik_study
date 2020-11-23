#include <iostream>
#include <cmath>
using namespace std;

bool is_in_square(double x, double y)
{
    return ((fabs(x)<=1)&&(fabs(y)<=1));
}

int main()
{
    double x, y;
    cin >> x >> y;
    if (is_in_square(x,y)) cout << "YES";
    else cout << "NO";
    return 0;
}