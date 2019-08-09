#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
        int n=atoi(argv[1]);
        int i,j,k=2,arr[n][n];
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        arr[i][j]=atoi(argv[k]);
                        k++;
                }
        }
                for(i=0;i<n;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                if(i>j)
                                {
                                        cout<<arr[i][j]<<" ";
                                }
                        }
                }
}

