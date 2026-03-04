#include <iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    cout<<"the reverse number is : "<<rev;
    return 0;
}
