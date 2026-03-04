#include <iostream>
using namespace std;
int prime(int N)
{
    for(int i=2;i<=N;i++)
    {   bool isprime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        {
         cout<<i<<endl;   
        }
        
    }
}
int main()
{
    prime(50);
    return 0;
}