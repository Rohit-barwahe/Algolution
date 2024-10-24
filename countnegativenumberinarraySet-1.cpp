#include<iostream>
using namespace std;

int main()
{
	int arr[7]={-1,-2,-5,-4,-6,-7,-8};
	int count=0;
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=0; i<n; i++)
	{
	   if(arr[i]<0)
	{
		count++;
	}
    }
    cout<<count;
}
