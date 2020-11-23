#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    char a;
	
    cin >> a;
    
	if (a >= '0' && a <= '9') 
		cout << "yes";
    else 
		cout << "no";
}