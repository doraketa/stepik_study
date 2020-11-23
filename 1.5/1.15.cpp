#include <iostream>

using namespace std;

int main()
{
	int checkCounter = 0, inputedNumber = 0, inputedX, inputedY;
	
	cin >> inputedY >> inputedX;
	
	do
	{
		cin >> inputedNumber;
		
		if (inputedNumber !=0 && inputedX > inputedNumber && inputedX > inputedY) 
			checkCounter ++;
		inputedY = inputedX;
		inputedX = inputedNumber;
	}
	while(inputedNumber != 0);
	
	cout << checkCounter;
}