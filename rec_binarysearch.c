#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int left,int right,int num)
{
	if(left>right)
		return -1;
	int mid=left+(right-left)/2;
		if(arr[mid]==num)
			return mid;
		if(num>arr[mid])
			return binary_search(arr,mid+1,right,num);
		return binary_search(arr,left,mid-1,num);
}
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int a=binary_search(arr,0,8,5);
	printf("%d",a);
}
