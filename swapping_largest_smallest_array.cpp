#include <iostream>
#include<climits>//this is used as INT_MAX and INT_MIN is stored in ths if not written then desired output will not get
using namespace std;
int main()
{
    int size=6,index,index1;
    int arr[size];
    int smallest= INT8_MAX;
    int largest=INT8_MIN;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest); 
    }
    cout<<"the smallest and largest is :"<<smallest<<endl<<largest<<endl;
    swap(largest,smallest);
    cout<<"the smallest and largest after swapping is :"<<smallest<<endl<<largest<<endl;
    return 0;
}
