#include<iostream>
using namespace std;

int main()
{
    int arr[]={-1,-2,-5,-4,-3,-6,-7};

    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    cout<<count;
}