#include <iostream>
#include <vector>
using namespace std;

int majority(vector <int>& nums)
{
    int n=nums.size();
    int freq=0,ans;
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
       
    }
     return ans;
}

int main()
{
    vector<int>nums={3,3,4};
    cout<<majority(nums);
    return 0;
}
