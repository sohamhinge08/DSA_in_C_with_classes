#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0;st<n;st++)
    {
        for(int gap=st;gap<n;gap++)
        {
            for(int end=st;end<=gap;end++)
            {
                cout<<arr[end];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
