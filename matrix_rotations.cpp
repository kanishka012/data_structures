#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
        int h=2;
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
        while(h!=0)
        {
                for(i=0;i<n;i++)
                {
                        for(j=i+1;j<n;j++)
                        {
                                int t=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=t;
                        }
                }
        	for(i=0;i<n;i++)
        	{
                	int start=0,end=n-1;
                	while(start<end)
                	{		
                        	int temp=arr[i][start];
                        	arr[i][start]=arr[i][end];
                        	arr[i][end]=temp;
                        	start++;
                       	 	end--;
                	}
        	}
		h--;
	}
                 for(i=0;i<n;i++)
                 {
                        for(j=0;j<n;j++)
                        {
                                cout<<arr[i][j]<<" ";
                        }
			cout<<"\n";
                }
}


