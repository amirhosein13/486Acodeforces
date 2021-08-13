#include <iostream>

using namespace std;

int main(){
    long long a;
    cin >> a;
    if (a%2==1)
    {
        cout<<((a-1)/2)-a<<endl;
    }
    else
    {
        cout<<a/2<<endl;
    }
    
    
}