#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-2],i,k=0;
	for(i=1;i<=argc-2;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int sum=atoi(argv[argc-1]);
	int start=0,end=k-1;
	while(start<=end)
	{
		if(arr[start]+arr[end]>sum)
			end--;
		else if(arr[start]+arr[end]<sum)
			start++;
		else
		{
			printf("%d %d\n",arr[start],arr[end]);
			start++;
			end--;
		}
	}
return 0;
}
