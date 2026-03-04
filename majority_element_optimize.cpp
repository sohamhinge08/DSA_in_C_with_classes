#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority(vector <int>& nums)
{
    int n=nums.size(),ans=nums[0];
    int frequency=1; 
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            frequency++;
        }
        else{
            frequency=1;
            ans=nums[i];
        }
        if(frequency>n/2)
        {
            return ans;
        }
}
}
int main()
{
    vector <int> nums={1,2,2,1,1};
    cout<<majority<<endl;
    return 0;
}
