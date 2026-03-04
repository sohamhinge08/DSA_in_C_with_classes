#include<iostream>
#include<vector>
using namespace std;
 int reverse(vector<int>&v)
 {
    int start=0, rev=v.size()-1;
    while(start<rev)
    {
        swap(v[start],v[rev]);
        start++,rev--;
    }
 }

 int main()
 {
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    reverse(vec);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
 }
