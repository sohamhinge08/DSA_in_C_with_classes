#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<2*(4-i)-2;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=4;j>i;j--)
        {
            cout<<"*";
        }
        if (i!=0)
        {
            for(int j=0;j<2*i;j++)
            {
                cout<<" ";
            }
        }
            for(int j=4;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}