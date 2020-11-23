#include <iostream>
#include <map>
#include <string>
 
using namespace std;
 
int main() 
{
    int n; cin >> n; 
    string s, k, f;
 
    map <string, string> m, mm;
 
    for (int i = 0; i<n; i++)
    {
        cin >> k >> s; 
        m[k] = s;
        mm[s] = k;
    }
 
    cin>> f;
 
    map <string, string>::iterator it;
    if ((it = m.find(f)) != m.end()) 
    {
        cout << it->second;
    }
    else if ((it = mm.find(f)) != mm.end())
    {
        cout << it->second;
    }
    else cout << "Слово не найдено.\n";
 
    return 0;
}