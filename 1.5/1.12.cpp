#include <iostream>
 
using namespace std;
 
int main() {
	int fValue = 0, lValue = 0, cValue = 0, inputedValue = 0, indexValue = 0;
	cin >> inputedValue;
	
	if (inputedValue == 0) 
    {
        cout << 0;   
		return 0;
	}
		
	if (inputedValue == 1) 
    {
		cout << 1;   
		return 0;
	}
    
    lValue = 0; 
    fValue = 1;
  
    indexValue++;  
  
  while (indexValue++ < inputedValue)
  {
    cValue = lValue + fValue;
    lValue = fValue;
    fValue = cValue;  
  }
  
  cout << cValue << endl;  
  return 0;
}