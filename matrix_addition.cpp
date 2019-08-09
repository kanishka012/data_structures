#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
	int n=atoi(argv[1]);
	int m=atoi(argv[2]);
	int arr[n][m],i,j,k=3;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	int arr1[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr1[i][j]=atoi(argv[k]);
			k++;
		}
	}
	int sum[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
}
	
	
