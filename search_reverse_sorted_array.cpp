#include <iostream>
#include <vector>
using namespace std;

int search (vector<int>A,int target)
{
    int st=0,end=A.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(A[mid]==target)
        {
            return mid;
        }
        if(A[st]<=A[mid])
        {
            if(A[st]<=target && A[st]<=A[mid])
            {
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
            else
            {
                if(A[mid]<=target && A[mid]<=A[end])
                {
                st=mid+1;
                }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main() {
    vector<int>A={6,7,0,1,2,3,4,5};
    int target=0;
    cout<<search(A,target);
    return 0;
}
