#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool symmetric;
    cin >> n;
    int a[10][10];
    
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++)
		{
            cin >> a[i][j];
        }
    }
    
    symmetric = true;
	
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (a[i][j] != a[j][i]) symmetric = false;
        }
    }
	
    if (symmetric) 
		cout << "YES";
    else 
		cout << "NO";
    return 0;
}