#include <iostream>
#include <vector>
using namespace std;

vector<int> product_array(vector<int>&nums)
{
    vector<int>productarr(nums.size(),1);
    for (int i = 0; i <nums.size(); i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(i!=j)
            {
                productarr[i]*=nums[j];
            }
        }
    }
    return productarr;
    
}
int main() {
    vector<int>nums={1,2,2,4};
    vector<int>pro=product_array(nums);
    for(int s:pro)
    {
        cout<<s<<" ";
    }
    return 0;
}
