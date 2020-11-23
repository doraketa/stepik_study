#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int inputedCount, lastInputed, minInputed = 1000;

	scanf ("%d", &inputedCount);

	for (int i = 0; i < inputedCount; i++)
	{
		scanf ("%d", &lastInputed);
		if (lastInputed > 0)
		{
			if (lastInputed < minInputed)
			{
				minInputed = lastInputed;
			}
		}
	}

	printf ("%d", minInputed);
}