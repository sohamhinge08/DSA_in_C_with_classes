#include <iostream>
using namespace std;
double computing(int n,double num)
{
    double ans=1;
    long binform=n;
    if(num==1) return 1;
    if(num==0) return 0;
    if(num==1&& n%2==0) return 1;
    if(num==1 && n%2==1) return -1;
    if(n<0)
    {
        num=1/num;
        binform= -binform;
    } 
    while(binform>0)
    {
        if(binform%2==1)
        {
            ans*=num;
        }
        num*=num;
        binform/=2;
    }
    return ans;
}
int main() {
    int n;
    double num;
    cout<<computing(-5,3);
    return 0;
}
