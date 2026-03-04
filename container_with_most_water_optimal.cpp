#include <iostream>
#include <vector>
using namespace std;

int container(vector<int>height)
{
    int maxwater=0;
    int lp=0,rp=height.size()-1;
    while(lp<rp)
    {
        int width=rp-lp;
        int ht=min(height[lp],height[rp]);
        int area=width*ht;
        maxwater=max(maxwater,area);
        (height[lp]<height[rp])?lp++:rp--;
    }
    return maxwater;
}
int main() {
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<container(height);
    return 0;
}
