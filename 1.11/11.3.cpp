#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
    int count;
    int b;
    set<int> s;
 
    cin >> count;
 
    while (count > 0 && cin >> b)
    {
        s.insert(b);
        --count;
    }
 
    cout << s.size() << endl;
 
    system("pause");
}