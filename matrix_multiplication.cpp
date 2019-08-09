#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
	int n=atoi(argv[1]),i,j,h=3,k;
	int m=atoi(argv[2]);
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr[i][j]=atoi(argv[h]);
			h++;
		}
	}
	int n1=atoi(argv[h]);h++;
	int m1=atoi(argv[h]);h++;
	int arr1[n1][m1];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			arr1[i][j]=atoi(argv[h]);
			h++;
		}
	}
	int arr2[n][m1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m1;j++)
		{
			arr2[i][j]=0;
			for(k=0;k<m;k++)
			{
				arr2[i][j]+=arr[i][k]*arr1[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m1;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
}
