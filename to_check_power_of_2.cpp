#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n>0 && ((n & (n-1))==0))
    {
        cout<<"the numbe is of power 2";
    }
    else{
        cout<<"the number is not of power 2";
    }
    return 0;
}
