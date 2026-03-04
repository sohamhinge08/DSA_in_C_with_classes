#include <iostream>
using namespace std;
int main()
{
    int n=7;
    int maxsum=INT8_MIN;
    int arr[n]={3,-4,5,4,-1,7,-8};
    for(int st=0;st<n;st++)
    {
        int currentsum=0;
        for(int i=st;i<n;i++)
        {
            currentsum+=arr[i];
            maxsum=max(currentsum,maxsum);
        }
    }
    cout<<"the max subarray is: "<<maxsum<<endl;
    return 0;
}
