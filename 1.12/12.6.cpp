#include <algorithm>
#include <iostream>
#include <vector> 
#include <cmath>
 
using namespace std;
 
struct Point {
  int x, y;
  Point() {}
  Point(int x, int y) : x(x), y(y) {}
};
 
bool NASH_COMPARE(Point a, Point b) {
  return sqrt(a.x*a.x + a.y*a.y) < sqrt(b.x*b.x + b.y*b.y);
}
 
int main() {
  int n;
  cin >> n;
  vector <Point> a(n);
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    a[i] = { x,y };
  }
  sort(a.begin(), a.end(), NASH_COMPARE);
  for (auto d : a) {
    cout << d.x << " " << d.y << endl;
  }
 
  return 0;
}