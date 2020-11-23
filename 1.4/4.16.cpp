#include <iostream>

using namespace std;

int main() {
  int boxX, boxY, boxZ, boxTX, boxTY, boxTZ;
  cin >> boxX >> boxY >> boxZ >> boxTX >> boxTY >> boxTZ;
  
  if (boxX > boxY) 
      swap(boxX, boxY);
  if (boxX > boxZ) 
      swap(boxX, boxZ);
  if (boxY > boxZ) 
      swap(boxY, boxZ);
  
  if (boxTX > boxTY) swap (boxTX, boxTY);
  if (boxTX > boxTZ) swap (boxTX, boxTZ);
  if (boxTY > boxTZ) swap (boxTY, boxTZ);
  
  if (boxX == boxTX && boxY == boxTY && boxZ == boxTZ) 
	cout << "Boxes are equal" << endl;
  else if (boxX <= boxTX && boxY <= boxTY && boxZ <= boxTZ) 
	cout << "The first box is smaller than the second one" << endl;
  else if (boxX >= boxTX && boxY >= boxTY && boxZ >= boxTZ) 
	cout << "The first box is larger than the second one" << endl;
  else cout << "Boxes are incomparable" << endl;
    
  return 0;
}