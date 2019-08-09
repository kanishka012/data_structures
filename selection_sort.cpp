#include<iostream>
using namespace std;
int main()
{
	int i,p,n,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		int min=arr[i];
		for(j=i;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				p=j;
			}
		}
		if(arr[i]>min)
		{
			int temp=arr[i];
			arr[i]=arr[p];
			arr[p]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
