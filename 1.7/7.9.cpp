#include <iostream>
#include <list>     
#include <iterator> 
#include <algorithm>

using namespace std;
 
struct is_even {
    bool operator() (const int& value) { return (value%2)==0; }
};
 
int main()
{
    int n, a;
    list<int> myList; 
    cin >>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>a;
        myList.push_back(a);
    }         
    
    myList.remove_if (is_even());
   
    list<int>::iterator i = min_element(myList.begin(),myList.end());
    if (i != myList.end()) cout <<*i<<endl;
    else cout <<0<<endl;       
    return 0;
}