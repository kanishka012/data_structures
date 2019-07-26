#include<stdio.h>
#include<stdlib.h>
int mid_binary_search(int arr[],int left,int right,int num)
{
	if(left>right)
		return -1;
	int mid=left+(right-left)/2;
	if(arr[mid]==num)
		return mid;
	if(arr[left]<=arr[mid])
	{
		if(num>=arr[left] && num<=arr[mid])
			return mid_binary_search(arr,left,mid-1,num);
		return mid_binary_search(arr,mid+1,right,num);
	}
	if(num>=arr[mid+1] && num<=arr[right])
                        return mid_binary_search(arr,mid+1,right,num);
                return mid_binary_search(arr,left,mid-1,num);
}
int main(int argc,const char *argv[])
{
	int num=atoi(argv[argc-1]);
	int arr[argc-1],i,k=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int a=mid_binary_search(arr,0,6,num);
	printf("%d",a);
}


