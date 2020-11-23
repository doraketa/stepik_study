#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main() {
  int startMax = 0, endMax = 1, bufStart = 0, bufEnd = 0;
    char s[200];
    cin.getline(s, 200);

    for (int i = 0; i < strlen(s) + 1; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            bufEnd = i;
            if (bufEnd - bufStart > endMax - startMax)
            {
                startMax = bufStart;
                endMax = bufEnd;
            }
            bufStart = i + 1;
        }
    }
    for (int i = startMax; i < endMax; i++){
        cout << s[i];
    }
    cout << endl;
  return 0;
}