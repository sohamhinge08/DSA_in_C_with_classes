#include <iostream>
using namespace std;
int main()
{
    int product=1,sum=0;
    int size=6;
    int arr[size];
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"the product is: "<<product<<endl;
    cout<<"the sum is: "<<sum<<endl;
    return 0;
}
