#include <iostream>
#include <string>

using namespace std;

int main()
{

	string df;

	int a=0,z=0;
	getline (cin, df);

	for (a=0;a<df.size();a++)
	{
		if (' '==df[a])
			z++;
	}

	cout << z + 1;

	return false;
}