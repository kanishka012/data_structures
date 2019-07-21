#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int left,int right,int key)
{
	int h;
	while(left<=right)
	{
		h=left+(right-left)/2;
		if(arr[h]==key)
			return h;
		if(arr[h]<key)
			left=h+1;
		if(arr[h]>key)
			right=h-1;
	}
	return -1;
}
int main(int argc,const char *argv[])
{
	int arr [argc-1],i,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	while(1)
	{
		int flag=0;
		for(i=0;i<argc-2;i++)
		{
			if(arr[i]>arr[i+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			int temp=arr[0];
			for(i=0;i<argc-2;i++)
			{
				arr[i]=arr[i+1];
			}
			arr[argc-2]=temp;
		}
		if(flag==0)
		break;
	}
	int loc,x=7;
	loc=binary_search(arr,0,8,x);
	if(loc!=-1)
		printf("Found :%d",loc);
	else
		printf("Not found");
	return 0;
}
