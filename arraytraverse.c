#include<stdio.h>
#include<stdlib.h>
void reverse_arr(int arr[],int size)
{
	int start=0,end=size-1;
	while(start<end)
	{
		int temp;
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},i;
	reverse_arr(arr,10);
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
}
	
