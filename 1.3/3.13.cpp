#include <iostream>

using namespace std;

int main() {
    int h1,m1,s1;
    cin>>h1>>m1>>s1;
    int sec1=s1+m1*60+h1*3600;
    int h2,m2,s2;
    cin>>h2>>m2>>s2;
    int sec2=s2+m2*60+h2*3600;
    cout<<sec2-sec1;
    return 0;
}