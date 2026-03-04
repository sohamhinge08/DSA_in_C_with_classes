#include <iostream>
#include <vector>
using namespace std;

int majority(vector <int>& nums)
{
    int n=nums.size();
    for(int val:nums)
    {
        int frequency=0;
        for(int majo:nums)
        {
            if(majo==val) 
            {
                frequency++;
            }
        }
        if(frequency>n/2)
        {
            return val;
        }
    }
    return -1;
}

int main()
{
    vector<int>nums={1,2,2,1,1};
    cout<<majority(nums);
}
