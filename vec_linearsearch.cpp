#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int>&v,int target)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    cout<<linearsearch(vec,6);
    return 0;
}
