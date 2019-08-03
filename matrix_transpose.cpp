#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
        int n=atoi(argv[1]);
        int arr[n][n],i,j,k=2;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        arr[i][j]=atoi(argv[k]);
                        k++;
                }
        }
        int arr1[n][n];
          for(i=0;i<n;i++)
          {
                for(j=0;j<n;j++)
                {
                        arr1[i][j]=arr[j][i];

                }
          }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
	}
}
