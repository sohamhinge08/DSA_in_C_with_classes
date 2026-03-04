#include <iostream>
using namespace std;

int main() {
    int n=7;
    int maxsum= INT8_MIN;
    int currentsum=0;
    int arr[n]={3,-4,5,4,-1,7,-8};
    for(int st=0;st<n;st++)
    {
        currentsum+=arr[st];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }    
    cout<<"the max sum is: "<<maxsum;
    return 0;
}
