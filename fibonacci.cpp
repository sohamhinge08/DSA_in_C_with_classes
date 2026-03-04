#include<iostream>
using namespace std;
int fibonacci(int N)
{
    int a=0,b=1,f;
    cout<<"the fibonacci series is: "<<endl;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<N;i++)
    {
        f=a+b;
        cout<<f<<endl;
        a=b;
        b=f;
    }
}
int main()
{
    fibonacci(43);
    return 0;    
}