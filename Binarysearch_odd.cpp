#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>arr,int target)
{
    int st=0,end=arr.size()-1;
    while(st<=end)
    {
        int mid=st+((end-st)/2);
        if(target>arr[mid])
        {
            st=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return-1;
}
int main() {
    vector<int>arr={-1,0,3,4,5,9,12};//odd
    int target=12;
    cout<<BinarySearch(arr,target)<<endl;
    vector<int>arr2={-1,0,3,4,5,9};//even
    int target2 =0;
    cout<<BinarySearch(arr2,target2);
    return 0;
}
