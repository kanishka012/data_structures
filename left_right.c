#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0,right=argc-2,left=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int mid=left+(right-left)/2;
	int temp=arr[0];
	for(i=0;i<mid;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[mid]=temp;
	int temp1=arr[argc-2];
	for(i=argc-2;i>mid;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[mid+1]=temp1;
	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
return 0;
}
